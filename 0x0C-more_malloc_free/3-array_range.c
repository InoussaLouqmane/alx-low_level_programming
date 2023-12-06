#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum
 * @max: maximum
 *
 * Return: A pointer to the created aray
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int j = 0;

	if (max < min)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
