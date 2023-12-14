#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * vaint - print an integer
 * @i: the integer to be used
 *
 * Return: Always void
 */
void vaint(int i)
{
	printf("%d", i);
}


/**
 * vachar - print a character
 * @c: the character  to be used
 *
 * Return: Always void
 */
void vachar(char c)
{
	printf("%c", c);
}


/**
 * vafloat - print a float
 * @f: the float to be used
 *
 * Return: Always void
 */

void vafloat(float f)
{
	printf("%f", f);
}

/**
 * vastr - print a string
 * @str: the string to be used
 *
 * Return: Always void
 */
void vastr(char *str)
{
	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed
 * to the function
 * @...: optional arguments
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int len = 0;
	int good = 0;

	va_start(ap, format);

	while (format[len] != '\0')
	{
		good = 0;
		switch (format[len])
		{
			case 'c':
				vachar(va_arg(ap, int));
				good = 1;
				break;
			case 'i':
				vaint(va_arg(ap, int));
				good = 1;
				break;
			case 'f':
				vafloat(va_arg(ap, double));
				good = 1;
				break;
			case  's':
				vastr(va_arg(ap, char *));
				good = 1;
				break;
			default:
				break;
		}
		if (format[len + 1] != '\0' && (good == 1))
			printf(", ");
		len++;
	}
	printf("\n");
}
