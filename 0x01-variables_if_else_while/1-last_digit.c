#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0 as end value
 */
int main(void)
{
	int n;
	int modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	modulo = n % 10;
	printf("Last digit of %d is %d and is ", n, modulo);
	if ((modulo < 6) && (modulo != 0))
		printf("less than 6 and not 0\n");
	else if (modulo == 5)
		printf("0\n");
	else
		printf("greater than 5\n");
	return (0);
}
