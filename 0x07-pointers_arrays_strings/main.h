#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 * @s: a pointer to the memory area that must be filled
 * @b: the character that must be used to fill memory
 * @n: The number of bytes that we are going to fill;
 *
 * Return: A pointer to the filled area;
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copied
 *
 * Return: A pointer to the new memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - a function that locate a character in a string
 * @s: A pointer to a string
 * @c: The character we are seaching for
 *
 * Return: a pointer to the position
 */

char *_strchr(char *s, char c);

/**
 * _strspn - Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 * @s: the string
 * @accept: the pattern
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept);

#endif /* _MAIN_H_ */
