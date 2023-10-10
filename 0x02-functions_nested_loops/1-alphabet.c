#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: This program just
 * print alphabet with lowercase letter
 * Return: 0 as end value;
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	putchar('\n');
	return (0);
}
