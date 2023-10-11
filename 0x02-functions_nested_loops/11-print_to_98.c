#include "main.h"
/**
 * print_to_98 - Print all natural number from n to 98
 * @n: natural number from which we start counting
 */
void print_to_98(int n)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
		for (j = 48; j <= 57; j++)
		{
			if (i > 48)
				_putchar(i);
			_putchar(j);
			if (i == 57 && j == 56)
			{
				break;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
}
