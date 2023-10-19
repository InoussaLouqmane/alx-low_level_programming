#include "main.h"

/**
 * _strlen - return string length
 * @str: string to be measured
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcat - Contatenates two strings
 * @dest: First string
 * @src: Second String
 *
 * Return: a point on the new string
 */

char *_strcat(char *dest, char *src)
{
	int dest_strlen = 0;
	int src_strlen = 0;
	int sum_strlen = 0;
	int i = 0;
	char *concat;

	dest_strlen = _strlen(dest);
	src_strlen = _strlen(src);
	sum_strlen = dest_strlen + src_strlen;

	for (i = 0; i < dest_strlen; i++)
	{
		*(concat + i) = *(dest + i);
	}
	for (i = 0; i <= src_strlen; i++)
	{
		*(concat + i) = *(src + i);
	}
	return (concat);
}
