#include "main.h"
/**
 * puts_half - Print the other part of a string
 * @str: The string that we will consider
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	
	i = (strlen / 2);
	
	if ((strlen % 2) == 1)
		i++;

	while (i < strlen)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}

