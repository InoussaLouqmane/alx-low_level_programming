#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the file to be read
 * @letters: number of letters to be printed
 *
 * Return: the actual number of letter print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	int actual, wrotechars;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(buffer);
		return (0);
	}

	actual = read(fp, buffer, letters);

	if (actual == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	wrotechars = write(1, buffer, actual);
	free(buffer);
	close(fp);
	if (wrotechars != actual)
		return (0);
	return (actual);
}
