#include "main.h"

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
 * find_scope - finds the substring match length
 * @str: The string to be treated
 * @pattern: the pattern we are searching for
 * Return: The length of the match substring
 */

unsigned int find_scope(char *str, char *pattern)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (str[i] != '\0')
	{
		if (in_string(pattern, str[i]))
			j++;
		else
			return (j);
		i++;
	}
	return (j);
}

/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: the string
 * @accept: the pattern
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int i = 0;
		unsigned int j = 0;
		unsigned int tmp = 0;

		while (s[i] != '\0')
		{
			if (in_string(accept, s[i]))
			{
				tmp = find_scope(s, accept);
				i += tmp;
				if (tmp > j)
					j = tmp;
			}
			i++;
		}
		return (j);
}
