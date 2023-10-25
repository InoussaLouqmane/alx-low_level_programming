#ifndef _MAIN_H_
#define _MAIN_H_
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
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: the string to be displayed
 *
 * Return: void
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string to be reversed
 *
 * Return: void
 */
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
#endif /* _MAIN_H_ */
