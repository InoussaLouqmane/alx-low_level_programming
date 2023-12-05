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
 * create_array - creates an array and fill it with c
 * @size: the size of the array
 * @c: the character to be used to fill the array
 *
 * Return: NULL if size is 0 or a pointer if it fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - returns a pointer to the duplicated string
 * @str: a pointer to the original string
 *
 * Return: NULL if str is NULL, a pointer otherwise
 */
char *_strdup(char *str);

#endif /* _MAIN_H_ */
