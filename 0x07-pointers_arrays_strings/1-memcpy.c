#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copied
 *
 * Return: A pointer to the new memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
