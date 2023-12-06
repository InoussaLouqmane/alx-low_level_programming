#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strlen_ - function to count length of strings
 * @str: the string
 *
 * Return: the length
 */
int strlen_(char *str)
{
	int strlen = 0;

	while (str[strlen] != '\0')
		strlen++;
	return (strlen);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of letter to be copied from s2
 *
 * Return: a pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int strlen1 = 0;
	unsigned int strlen2 = 0;
	unsigned int sum = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	strlen1 = strlen_(s1);
	strlen2 = strlen_(s2);
	if (n >= strlen2)
		n = strlen2;

	sum = strlen1 + n;
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
