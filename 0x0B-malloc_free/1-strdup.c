#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - returns a pointer to the duplicated string
 * @str: a pointer to the original string
 *
 * Return: NULL if str is NULL, a pointer otherwise
 */
char *_strdup(char *str)
{
	int strlen = 1;
	int i = 0;
	char *new_addr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}

	new_addr = malloc(sizeof(char) * strlen);

	if (new_addr == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
	{
		new_addr[i] = str[i];
	}
	return (new_addr);
}
