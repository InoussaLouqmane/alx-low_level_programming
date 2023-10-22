#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strcat - Contatenates two strings
 * @dest: First string
 * @src: Second String
 *
 * Return: a point on the new string
 */
char *_strcat(char *dest, char *src);

/**
 * _strcat - add n character(s) from second string to
 * first one
 * @dest: First string
 * @src: Second String
 * @n: number of characters
 *
 * Return: a point on the new string
 */
char *_strncat(char *dest, char *src, int n);
