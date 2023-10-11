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
	if (n < 0)
		n*=-1;
	_putchar((n % 10) + 48);
	return (0);
}
