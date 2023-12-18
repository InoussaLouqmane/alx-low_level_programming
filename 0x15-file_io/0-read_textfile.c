#include <stdlib.h>
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
	FILE *fp;
	int actual = 0;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);
	actual = write(1, filename, letters);

	if (actual == -1)
		return (0);

	return (actual);
}
