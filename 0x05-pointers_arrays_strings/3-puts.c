#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string
 * @str: pointer that point to the string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
