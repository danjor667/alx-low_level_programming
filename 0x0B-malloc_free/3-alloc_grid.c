#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - funtion that creat a 2d array
 * @width: inpuy columns
 * @height: input rowss
 * Return: a 2d matrix
 */
int **alloc_grid(int width, int height)
{
	int **row, i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		row = malloc(4 * height);
		for (i = 0; i < height; i++)
		{
			row[i] = malloc(4 * width);
			for (j = 0; j < width; j++)
			{
				row[i][j] = 0;
			}
		}
	}
	return (row);
}
