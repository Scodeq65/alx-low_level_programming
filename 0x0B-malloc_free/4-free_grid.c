#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2d array
 * @grid: the 2d grid to be freed
 * @height: the height of the grid
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int k;
	if (grid == NULL || height <= 0)
		return;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
