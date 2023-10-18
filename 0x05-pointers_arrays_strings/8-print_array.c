#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of an array
 * @a: a pointer to the array
 * @n: number of elements that we should display;
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a+i));
		if (i != (n-1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
		
			

