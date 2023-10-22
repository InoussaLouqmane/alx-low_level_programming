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
 * _strcat - add n character(s) from second string to
 * first one
 * @dest: First string
 * @src: Second String
 * @n: number of characters
 *
 * Return: a point on the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_strlen = 0;
	int sum_strlen = 0;
	int i = 0;
	int j = 0;

	dest_strlen = _strlen(dest);
	sum_strlen = dest_strlen + n;
	for (i = dest_strlen; i < sum_strlen; i++)
	{
		*(dest + i) = *(src + j);
		j++;
	}
	return (dest);
}
