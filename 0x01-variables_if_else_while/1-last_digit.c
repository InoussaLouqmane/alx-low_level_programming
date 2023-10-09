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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, (n % 10));
	if ((n < 6) && (n != 0))
		printf("less than 6 and not 0\n");
	else if (n > 5)
		printf("greater than 5\n");
	else
		printf("is 0\n");
	return (0);
}
