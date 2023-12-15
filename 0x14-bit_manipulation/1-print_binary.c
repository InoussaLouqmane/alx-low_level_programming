#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: the number passed to the function
 *
 * Return: Always void
 */
void print_binary(unsigned long int n)
{
	unsigned long int cat = 1;
	unsigned long int bin = 1;

	while (bin <= n)
		bin <<= 1;

	cat = bin;
	if (n == 0)
		printf("0");
	while (bin > 0)
	{
		if (cat > n)
		{
			bin >>= 1;
			cat >>= 1;
			continue;
		}

		if ((bin & n) == cat)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		bin >>= 1;
		cat >>= 1;
	}
}
