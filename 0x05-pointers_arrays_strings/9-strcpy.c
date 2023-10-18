#include "main.h"

/**
 * _strcpy - copy a string content to another one
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int strlen = 0;

	while (*(src + strlen) != '\0')
	{
		strlen++;
	}
	for (i = 0; i <= strlen; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
