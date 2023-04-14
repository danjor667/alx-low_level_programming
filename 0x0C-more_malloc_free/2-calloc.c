#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc- a function that allocate
 * memory using malloc
 * @nmemb: number of element
 * @size: size of the element
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;

	array = malloc(sizeof(size) * nmemb);
	if (nmemb == 0 || size == 0)
	{
		free(array);
		return (NULL);

	}
	if (array == NULL)
		return (NULL);
	memset(array, 0, (sizeof(size) * nmemb));
	return (array);
}
