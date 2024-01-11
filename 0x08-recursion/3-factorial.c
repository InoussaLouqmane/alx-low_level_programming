#include "main.h"

/**
 * factorial - return n factorial
 * @n: the number;
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
