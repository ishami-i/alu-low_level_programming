#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 *             by the alloc_grid function.
 * @grid: pointer to the 2D array of integers
 * @height: height of the grid (number of rows)
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* If the grid pointer itself is NULL, there is nothing to free */
	if (grid == NULL || height <= 0)
		return;

	/* 1. Free each individual row (width memory) */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* 2. Free the primary pointer containing the rows */
	free(grid);
}

