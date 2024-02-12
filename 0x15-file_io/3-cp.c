#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_err - terminate program after read error
 * @:filename: the name of the file
 *
 * Return: void
 */
void read_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * write_err - terminate program after write error
 * @:filename: the name of the file
 *
 * Return: void
 */
void write_err(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_error - terminate program after close error
 * @fd: the file descriptor value
 *
 * Return: void
 */
void close_err(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Entry point
 * @argc: number of argument passed to function
 * @argv: table of arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int read_fd, writen_fd, read_bytes, writen_bytes = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_fd = open(argv[1], O_RDONLY);
	if (read_fd == -1)
		read_err(argv[1]);

	writen_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);

	if (writen_fd == -1)
		write_err(argv[2]);

	while ((read_bytes = read(read_fd, buffer, sizeof(buffer))) > 0)
	{
		if (read_bytes == -1)
			read_err(argv[1]);

		writen_bytes = write(writen_fd, buffer, read_bytes);

		if (writen_bytes == -1)
			write_err(argv[2]);
	}

	if (close(read_fd) == -1)
		close_err(read_fd);

	if (close(writen_fd) == -1)
		close_err(writen_fd);
	exit(EXIT_SUCCESS);
}
