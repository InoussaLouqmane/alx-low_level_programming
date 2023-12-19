#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - a fucntion that create files
 * @filename: the name of the file
 * @text_content: the file content
 *
 * Return: 1 On Success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int bytes, fd;
	int strlen = 1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[strlen] != '\0')
			strlen++;
		bytes = write(fd, text_content, strlen);

		if (bytes == -1 || bytes != strlen)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
