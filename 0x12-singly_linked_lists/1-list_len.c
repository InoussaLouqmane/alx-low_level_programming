#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all elements of a list_t
 * @h: the head of the list_t
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
