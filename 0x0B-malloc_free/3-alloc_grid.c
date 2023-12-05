#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - return a pointer to a grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	
	if (grid == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		grid[i] =(int *) malloc(sizeof(int) * width);
		
		if (grid[i] == NULL)
			return (NULL);
		
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
