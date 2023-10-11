#include "main.h"
/**
 * times_table - Print 9 times tables
 */
void times_table(void)
{
	int i;
	int j;
	int produit;
	int dizaine;
	int unite;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			produit  = i * j;
			dizaine = (int) produit / 10;
			unite = produit % 10;
			if (dizaine)
			{
				_putchar(48 + dizaine);
			}
			_putchar(48 + unite);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
}
