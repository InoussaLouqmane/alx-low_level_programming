#include "main.h"
#include <stdio.h>

/**
 * is_divisible - check if a number is divided by
 * another one
 * @n: the divider
 * @goal: the goal
 *
 * Return: a number
 */

int is_divisible(int n, int goal)
{
	if (n == 1)
	{
		return (1);
	}
	else if ((goal % n) == 0)
	{
		return (0);
	}
	else
	{
		return (is_divisible((n - 1), goal));
	}
}

/**
 * is_prime_number - verify if a number is prime
 * @n: is the number concerned
 *
 * Return:1 if success 0 otherwiser
 */
int is_prime_number(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	if (n == 0 || n == 1)
	{
		return (0);
	}
	return (is_divisible((n / 2), n));
}
