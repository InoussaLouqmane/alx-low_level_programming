#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * strlen_ - count string lenth
 * @str: the string
 *
 * Return: strlen
 */

int strlen_(char *str)
{
	int strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	return (strlen);
}
/**
 * auto_fill - fill the new emplacement
 * @concat: the string segment
 * @str: the string to be added;
 * @start: the starting number;
 *
 * Return: a pointer to the segment
 */

char *auto_fill(char *concat, char *str, int start)
{
	int len = strlen_(str);
	int i, j;

	for (i = start, j = 0; j < len; i++, j++)
	{
		concat[i] = str[j];
	}
	return (concat);
}

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument values
 *
 * Return: NULL if failure, a pointer if not.
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, len, sum = 0;

	if (ac < 1 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		sum += strlen_((av[i]) + ac + 1);
	}
	concat = malloc(sizeof(char) * sum);

	if (concat == NULL)
		return (NULL);
	sum = 0;

	for (i = 0; i < ac; i++)
	{
		len = strlen_(av[i]);

		if (len > 0)
		{
			concat = auto_fill(concat, av[i], sum);
			sum += len;
			concat[sum] = '\n';
			sum++;
		}
	}
	concat[sum] = '\0';
	return (concat);
}


