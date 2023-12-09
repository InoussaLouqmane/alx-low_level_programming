#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer;
 * @array: the array to be treated;
 * @size: size of the array;
 * @cmp: a pointer to the function
 *
 * Return: the index of the first element;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
