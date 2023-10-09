#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Explanation
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits.
 * 1 should be printed as 01
 * The combination of numbers must be separated by comma and a space
 * The combinations of numbers should be printed in ascending orde
 * 00 01 and 01 00 are considered as the same combi numbers 0 and 1
 * You are not allowed to use any variable of type char
 * Only use putchar and max eight putchars
 * Return: 0 as end value
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57 ; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if ((i == 57) && (j == 56) && (k == 57) && (l == 57))
					{
						continue;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
