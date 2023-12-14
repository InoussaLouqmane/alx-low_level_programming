#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <ctype.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings follow by a new line
 * @separator: the separator in the format
 * @n: the number of string passed to function
 * @...: optional arguments
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
