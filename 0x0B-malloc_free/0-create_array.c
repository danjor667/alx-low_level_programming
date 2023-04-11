#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that create a
 * an array
 * @size: input size of array
 * @c: char to film the array
 * Return: the filled array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size);
	if (size == 0 || array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i <= size - 1; i++)
	{
		array[0] = c;
	}
	return (array);
}
