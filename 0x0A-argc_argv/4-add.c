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
	int i = 0;
	int elt = 0;
	int sum = 0;

	if (argc == 1)
	{
	}
	else
	{
		for (i = 1; i < argc ; i++)
		{
			elt = atoi(argv[i]);
			if (elt == 0 || elt < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += elt;
		}
		printf("%d\n", sum);
	}
	return (EXIT_SUCCESS);
}
