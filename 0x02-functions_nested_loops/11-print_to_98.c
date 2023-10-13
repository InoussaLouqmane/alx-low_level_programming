#include "main.h"
/**
 * print_to_98 - Print all natural number from n to 98
 * @n: natural number from which we start counting
 */
void print_to_98(int n)
{
	int i;
	int j;
	int dizaine = (int) (n / 10);
	int unite = (n % 10);
	
	unite += 48;
	dizaine += 48;
	
	for (i = dizaine; i <= 57; i++)
	{
		for (j = unite; j <= 57; j++)
		{
			if (i != 48)
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
}
if (n < 0)
{
	for (i = (57 + dizaine); i >= 48; i--)
	{
		for (j = (57 + unite); j >= 57; j--)
		{
			_putchar('-');
			_putchar(	
