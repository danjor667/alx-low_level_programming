#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that dree a 2d
 * array
 * @grid:input 2d array
 * @height: input number of rows
 * Return void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
