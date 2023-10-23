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
