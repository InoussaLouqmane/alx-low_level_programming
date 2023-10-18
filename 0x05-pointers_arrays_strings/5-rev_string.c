#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: a pointer that point to the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int strlen = 0;
	int i = 0;
	int j = 0;
	char tmp;

	while (*(s + strlen) != '\0')
	{
		strlen++;
	}

	strlen--;
	i = strlen / 2;

	while (strlen >= i)
	{
		tmp = *(s + strlen);
		*(s + strlen) = *(s + j);
		*(s + j) = tmp;
		j++;
		strlen--;
	}
}
