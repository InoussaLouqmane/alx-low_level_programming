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
	unsigned long int cat = 1;

	printf("index : %d  > %d (nombre de bits)", index, sizeof(n) * 8);
	if (index >= (sizeof(n) * 8))
		return (-1);

	cat <<= index; 
	if ((cat & n) != 0)
		return (1);
	else
		return (0);
}
