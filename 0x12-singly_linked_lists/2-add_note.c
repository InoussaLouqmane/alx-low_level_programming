#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node in top of list_t
 * @head: is the current head of list_t
 * @str: is the components of list_t
 *
 * Return: a pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int counter = 0;

	if (new == NULL)
		return (NULL);

	while (*str != '\0')
	{
		counter++;
		str++;
	}
	new->len = counter;
	new->str = strdup(str);
	new->next = *head;

	return (new);
}
