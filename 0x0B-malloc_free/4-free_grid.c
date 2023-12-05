#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees space
 * @grid: the grid to be freed
 * @height: the height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
