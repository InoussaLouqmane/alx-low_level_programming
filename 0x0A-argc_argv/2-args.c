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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (EXIT_SUCCESS);
}
