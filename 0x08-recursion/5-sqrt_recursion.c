#include "main.h"
#include <stdio.h>

/**
 *
 * find_sqroot - square root of a given number
 * @n: the range of iteration
 * @goal: the number we are searching for
 *
 * Return: -1 is the number doesn't admit
 * natural squaroot
 * the squaroot
 */
int find_sqroot(int n, int goal)
{
	if ((n * n) == goal)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (find_sqroot((n - 1), goal));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to be treated
 *
 * Return: the squareroot of the given number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (find_sqroot((n / 2), n));
}
