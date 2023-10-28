#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	int tab[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int modulo = 0;
	int cents = 0;
	int number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("0\n");
		} 
		else 
		{
			for (i = 0; i < 5; i++)
			{
				modulo = cents % tab[i];
				if (cents == 0)
				{
					break;
				}
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
		}
	}
	printf("%d\n", number);
	return (EXIT_SUCCESS);
}
