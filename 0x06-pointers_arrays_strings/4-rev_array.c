#include "main.h"
/**
 * reverse_array - a function tha revere an array of int
 * @a: the array
 * @n: the len of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i != j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
