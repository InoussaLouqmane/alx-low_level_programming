#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: first parameter
 * ...: optional paramters
 * Return: 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
