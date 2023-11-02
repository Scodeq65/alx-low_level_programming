#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: A pointer to the newly allocated 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = (int **)malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		mee[y] = (int *)malloc(sizeof(int) * width);

		if (mee[y] == NULL)
		{
			for (x = 0; x < y; x++)
				free(mee[x]);
			free(mee);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			mee[y][x] = 0;
	}

	return (mee);
}

