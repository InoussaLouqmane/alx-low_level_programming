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
int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (EXIT_SUCCESS);
}
