#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 * @s: a pointer to the memory area that must be filled
 * @b: the character that must be used to fill memory
 * @n: The number of bytes that we are going to fill;
 *
 * Return: a pointer to filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
