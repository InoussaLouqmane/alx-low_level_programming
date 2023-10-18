#include <stdio.h>
#include <unistd.h>

/**
 * reset_to_98 - a function that takes a pointer to an int as
 * parameter and updates the value it points to to 98.
 * @n: a pointer to an int value
 *
 * Return: void
 */

void reset_to_98(int *n);

/**
 * swap_int - swap two integers values
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b);

/**
 * _strlen - return lenght of a string
 * @s: pointer that point to a string
 *
 * Return: the lenght of the string
 */

int _strlen(char *s);

/**
 * _puts - print a string
 * @str: pointer that point to the string
 *
 * Return: void
 */

void _puts(char *str);

/**
 * print_rev - print a string in rever
 * @s: pointer that point to the string
 *
 * Return: void
 */

void print_rev(char *s);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * rev_string - Reverse a string
 * @s: a pointer that point to the string
 *
 * Return: void
 */
void rev_string(char *s);

/**
 * puts2 - Print all other character of a string
 * @str: The string that we will consider
 *
 * Return: void
 */
void puts2(char *str);

/**
 * puts_half - Print the other half of a string
 * @str: The string that we will consider
 *
 * Return: void
 */
void puts_half(char *str);

/**
 * _atoi - convert a string to an integer
 * @s: The string to be converted
 *
 * Return: void
 */
int _atoi(char *s);
