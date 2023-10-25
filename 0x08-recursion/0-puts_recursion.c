#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string to be displayed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
