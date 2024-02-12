#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * power - return 2 power y
 * @y: the exposant
 *
 * Return: 2 power y
 */
unsigned int power(unsigned int y)
{
	unsigned int i = 0;
	unsigned int res = 1;

	for (i = 0; i < y; i++)
	{
		res *= 2;
	}
	return (res);
}

/**
 * check - check if a character is binary
 * @c: character
 *
 * Return: 0 if no, 1 if yes
 */
int check(int c)
{
	if (c == 49)
		return (1);
	else if (c == 48)
		return (0);
	else
		return (2);
}
/**
 * binary_to_uint - bin to decimal
 * @b: the char of binary
 *
 * Return: Decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int strlen = 0;
	unsigned int tmp = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[strlen] != '\0')
	{
		strlen++;
	}
	for (i = 0; i < strlen; i++)
	{
		tmp = check(b[i]);

		if (tmp == 2)
			return (0);

		dec += tmp * power(strlen - (i + 1));

	}
	return (dec);
}
