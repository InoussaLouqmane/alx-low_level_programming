#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: the string to be treated
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	i++;
	return (i + _strlen_recursion(s + 1));
}

/**
 * Checkstate - verifiy if str is a palindrome
 * @str: the string to be treated
 * @strlen: the length of the string
 * @n: The range
 *
 * Return: 1 if str is palindrome 0 otherwise
 */
int Checkstate(char *str, int strlen, int n)
{
	if (n == (strlen / 2))
	{
		return (1);
	}
	if (str[n] == str[strlen - 1 - n])
		return (Checkstate(str, strlen, n + 1));
	else
		return (0);
}

/**
 * is_palindrome - Check if a str is a palindrome
 * @s: the string to be treated
 *
 * Return: 1 on success 0 otherwise
 */

int is_palindrome(char *s)
{
	int strlen = _strlen_recursion(s);
	return (Checkstate(s, strlen, 0));	
}
