#include "main.h"

/**
 * _strchr - a function that locate a character in a string
 * @s: A pointer to a string
 * @c: The character we are seaching for
 *
 * Return: a pointer to the position
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			ptr = (s + i);
			return (ptr);
		}
		i++;
	}
	return (ptr);
}
