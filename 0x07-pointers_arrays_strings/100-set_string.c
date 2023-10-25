#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: the string to be changed
 * @to: pattern
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
