#include "main.h"
/**
 * print_last_digit - Print the last digit
 * of the number entered
 * @n: number entered
 *
 * Return: last digit value of n
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (x >= 0)
	{
		_putchar(48 + x);
		return (x);
	}
	else
	{
		_putchar(48 - x);
		return (-x);
	}
}
