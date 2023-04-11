#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid function.
 * @grid: ...
 * @height: .
 * Return: .
 */

void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}

	free(grid);
}
