#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: a pointer that point to the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	i--;
	while (i >= 0)
	{
		*s[i] = 
		i--;
	}
	_putchar('\n');
}
