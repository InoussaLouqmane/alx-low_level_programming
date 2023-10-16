#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in rever
 * @s: pointer that point to the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}
