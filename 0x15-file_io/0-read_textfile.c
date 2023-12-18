#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * cleaner - cleaner stream and memory on fail
 * @fd: the file descriptor to clean
 * @string: The string to be processed
 *
 * Return: Always 0
 */
int cleaner(int fd, char *string)
{
	close(fd);
	free(string);
	return (0);
}
/**
 * read_textfile - print text from a file
 * @filename: is the filename
 * @letters: the number of letters
 *
 * Return: The actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd, read_bytes, writen_bytes = 0;
	char *string;

	if (filename == NULL)
		return (0);

	string = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);

	if (string == NULL)
		return (0);

	if (fd == -1)
		return (cleaner(fd, string));

	read_bytes = read(fd, string, sizeof(char) * letters);

	if (read_bytes == -1)
		return (cleaner(fd, string));

	writen_bytes = write(STDOUT_FILENO, string, read_bytes);

	close(fd);

	if (writen_bytes == -1 || (writen_bytes != read_bytes))
		return (cleaner(fd, string));

	free(string);
	return (writen_bytes);
}
