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

	row = malloc(sizeof(*row) * height);
	if (height <= 0 || width <= 0 || row == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			row[i] = malloc(sizeof(**row) * width);
			if (row[i] == 0)
			{
				while (i--)
					free(row[i]);
				free(row);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				row[i][j] = 0;
			}
		}
	}
	return (row);
}
