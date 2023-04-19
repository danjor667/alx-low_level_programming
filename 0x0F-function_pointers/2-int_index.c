#include <stdlib.h>
/**
 * int_index- function to compare integers
 * @size: no of element in the array
 * @array: input array of integers
 * @cmp: comparing function
 * Return: return an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i <= size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
			i++;
		}
	}
	return (-1);

