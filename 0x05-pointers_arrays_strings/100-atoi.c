#include "main.h"
#include <stdio.h>
/**
 * power - return a 10 puissance n
 * @n: puissance number
 *
 * Return: 'total' the puissance of 10 n
 */
int power(int n)
{
	int i = 0;
	int total = 1;

	for (i = 0; i < n; i++)
	{
		total *= 10;
	}
	return (total);
}

/**
 * number_length - return the number of character around in one line and
 * are between 0 & 9
 * @str: The string we want to treat
 * @n: The starting position
 *
 * Return: The number of character
 */
int number_length(char *str, int n)
{
	int i = 0;

	do {
		i++;
		n++;
	} while ((str[n] >= 48) && (str[n] <= 57));
	return (i);
}

/**
 * addition - Do addition of given number converted from char to int
 * @caracter: The caracter that should be treated
 * @n: the weight of the number. Usefull for powerfunction
 *
 * Return: the number converted regarding his weight
 */
int addition(char caracter, int n)
{
	return ((caracter - 48) * power(n));
}

/**
 * _signGiver - Count how many time - occurs in a range
 * and give a final sign
 * @str: the string to treat
 * @n: Range Ending Point
 *
 * Return: -1 if number of - is odd
 * 1 if not odd
 */
int _signGiver(char *str, int n)
{
	int i = 0;
	int minusCounter = 0;

	for (i = 0; i < n; i++)
	{
		if (*(str + i) == 45)
			minusCounter++;
	}
	if (minusCounter % 2 == 1)
	{
		return (-1);
	}
	return (1);
}

/**
 * _atoi - convert a string to an integer
 * @s: The string to be converted
 *
 * Return: the number
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	long int sum = 0;
	int numberlen = 0;
	int power_indice = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 58)
		{
			numberlen = number_length(s, i);
			power_indice = numberlen;
			for (j = i; j < (i + numberlen); j++)
			{
				power_indice--;
				sum += addition(s[j], power_indice);
			}
			sum *= _signGiver(s, i);
			return (sum);
		}
		i++;
	}
	return (0);
}
