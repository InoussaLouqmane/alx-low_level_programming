#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

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

	writen_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);

	while ((read_bytes = read(read_fd, buffer, 1024)) > 0)
	{
		if (read_fd == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writen_bytes = write(writen_fd, buffer, read_bytes);
		if (writen_bytes == -1 || writen_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(read_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", read_fd);
		exit(100);
	}
	if (close(writen_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", writen_fd);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
