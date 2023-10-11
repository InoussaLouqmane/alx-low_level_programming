#include "main.h"
/**
 * _isalpha - Say if a letter or not
 * @c: Character entered
 *
 * Return: 0 if c is letter
 * 1 otherwise
 */
int _isalpha(int c)
{
	if (((c <= 122) && (c >= 97)) || ((c <= 90) && (c >= 65)))
		return (1);
	else
		return (0);
}
