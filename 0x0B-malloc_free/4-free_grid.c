#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid previously
 * @grid: pointer to the grid to be freed
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL || height != 0)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
