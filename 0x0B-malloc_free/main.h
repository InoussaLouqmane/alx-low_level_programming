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


/**
 * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2);
/**
 * alloc_grid - return a pointer to a grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to the grid
 */
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
#endif /* _MAIN_H_ */
