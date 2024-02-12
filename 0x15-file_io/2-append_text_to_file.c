#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - a fucntion that append to files
 * @filename: the name of the file
 * @text_content: the file content
 *
 * Return: 1 on success, 0 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes, strlen = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}


	if (text_content != NULL)
	{
		while (text_content[strlen] != '\0')
			strlen++;

		bytes = write(fd, text_content, strlen);
	}

	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
