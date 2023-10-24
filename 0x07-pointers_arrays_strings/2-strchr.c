#include "main.h"
#include <stdio.h>

/**
 * _strchr - a function that locate a character in a string
 * @s: A pointer to a string
 * @c: The character we are seaching for
 *
 * Return: a pointer to the position
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *ptr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{	
			ptr = s + i;
			return (ptr);
		}
		i++;
	}
	return (ptr);
}
