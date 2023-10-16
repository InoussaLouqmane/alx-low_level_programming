#include <stdio.h>
#include "main.h"

/**
 * _strlen - return lenght of a string
 * @s: pointer that point to a string
 *
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
