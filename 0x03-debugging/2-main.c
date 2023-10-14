#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        float a, b, c;
        float largest;
	
	while (1)
	{
		scanf("%f %f %f", &a,&b,&c);
        	largest = largest_number(a, b, c);
        	printf("%.0f is the largest number\n", largest);
	}



        return (0);
}
