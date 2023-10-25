#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonal of square matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int tour = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += (a + tour)[i];
		tour += size;
	}
	tour = 0;
	for (i = (size - 1); i >= 0; i--)
	{
		sum2 += (a + tour)[i];
		tour += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
