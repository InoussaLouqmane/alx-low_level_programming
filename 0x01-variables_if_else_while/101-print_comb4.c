#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Explanation
 * This code print all possible different
 * combinations of three digits.
 * Return: 0 as end value
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 48; i < 58 ; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if ((i < j) && (j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i == 55) && (j == 56) && (k == 57))
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
