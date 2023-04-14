#include "main.h"
#include <stdlib.h>
/**
 * array_range- function that creat an array on int
 * @min: starting int
 * @max: stopping int
 * Return: a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int n = 0;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	i = min;
	while (i <= max)
	{
		n++;
		i++;
	}
	array = malloc(sizeof(min) * n);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= n)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
