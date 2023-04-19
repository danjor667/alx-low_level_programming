#include <stdlib.h>
/**
 * array_iterator- function that passes
 * each element of an arry to a function
 * @array: the input array
 * @size: size of the array
 * @action: input function (as pointer)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		exit(89);
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
