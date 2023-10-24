#include "main.h"
#include <stdio.h>

/**
 * in_string - Find if a character is present in a string
 * @str: the string
 * @c: the character
 *
 * Return: 1 on success.
 * 0 on fail
 */
unsigned int in_string(char *str, char c)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strpbrk - function locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * @s: the string to be treated
 * @accept: the reference string
 *
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (in_string(accept, s[i]))
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
