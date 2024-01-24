#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be printed;
 * @f: function
 *
 * Return: void;
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		name = "";
	f(name);
}
