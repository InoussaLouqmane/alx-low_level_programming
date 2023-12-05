#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int strlen1 = 0;
	int strlen2 = 0;
	int j = 0;
	int sum;
	char *concat;

	while (s1[i] != '\0')
	{
		if (s1 == NULL)
			break;
		strlen1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		if (s2 == NULL)
			break;
		strlen2++;
		i++;
	}
	sum = strlen1 + strlen2;
	concat = malloc(sizeof(char) * (sum + 1));

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < strlen1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = strlen1; i < sum; i++)
	{
		concat[i] = s2[j];
		j++;
	}
	concat[sum] = '\0';
	return (concat);
}
