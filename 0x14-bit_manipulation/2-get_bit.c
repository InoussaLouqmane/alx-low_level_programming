#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - return value of a bit at specified index
 * @n: the number
 * @index: index number
 *
 * Return: the value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int long cat = 1;

	if ((cat << index) > n)
		return (-1);

	if (((cat << index) & n) != 0)
		return (1);
	else
		return (0);
}
