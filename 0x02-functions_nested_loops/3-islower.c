#include "main.h"
/**
 * _islower - Say if a character
 * is lowercase or not
 * @c: Character entered
 *
 * Return: 0 if c is lowercase
 * 1 otherwise
 */
int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
		return (1);
	else
		return (0);
}
