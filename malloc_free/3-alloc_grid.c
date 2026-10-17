#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	if(width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for(int i = 0; i < width + height; i++)
	{
		grid[i] = 0;
	}
	return (grid)
}
