#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array and fill it with c
 * @size: the size of the array
 * @c: the character to be used to fill the array
 *
 * Return: NULL if size is 0 or a pointer if it fails
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *table = malloc(sizeof(char) * size);

	if (size == 0 || table == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table[i] = c;
	return (table);
}
