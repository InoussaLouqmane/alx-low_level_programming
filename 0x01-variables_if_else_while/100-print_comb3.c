#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Explanation
 * This code print all possible different
 * combinations of two digits.
 * Return: 0 as end value
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 48; i < 58 ; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if ((i == 56) && (j == 57))
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
	putchar(10);
	return (0);
}
