#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * change_break - return number of pieces to obtain cents
 * @cents: the number of cents
 *
 * Return: The number of pieces
 */

int change_break(int cents)
{
	int number = 0;
	int modulo = 0;
	int i = 0;
	int tab[5] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		modulo = cents % tab[i];
		if (cents == 0)
			break;
		if (modulo == 0)
		{
			number += cents / tab[i];
			cents = 0;
		}
		else if (modulo != 0 && modulo != cents)
		{
			number += (cents - modulo) / tab[i];
			cents = modulo;
		}
	}
	return (number);
}

/**
 * main - Entry point
 * @argc: Number of argc
 * @argv: Arg list
 *
 * Return: 0 on success
 * anything else on failure
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
		cents = atoi(argv[1]);
		if (cents < 0)
			printf("0\n");
		else
			number = change_break(cents);
	printf("%d\n", number);
	return (EXIT_SUCCESS);
}
