#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - writes alphabet with
 * lowercase lette ten times
 *
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
}
