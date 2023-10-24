#include "main.h"
#include <stdio.h>

/**
 * str_match - verify if a string match with another one
 * @str: the string to be processed
 * @pattern: the string we are searching for
 * @n: starting point
 *
 * Return: 1 if strings match,
 * 0 is no match
 */
int str_match(char *str, char *pattern, int n)
{
	int pattern_strlen = 0;
	int range = n;
	int i = 0;

	while (pattern[pattern_strlen] != '\0')
	{
		pattern_strlen++;
	}
	range += pattern_strlen;
	while ((str[n] != '\0') && (n < range))
	{
		if (str[n] != pattern[i])
			return (0);
		n++;
		i++;
	}
	return (1);
}

/**
 * _strstr - function finds the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: The string to be treated
 * @needle: The string we are suppose to search
 *
 * Return: A pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (str_match(haystack, needle, i))
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
