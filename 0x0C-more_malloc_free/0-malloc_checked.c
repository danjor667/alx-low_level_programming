#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocate
 * memory
 * @b: size of memory kto allocate
 * Return: poiter to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		return (98);
	}
	return (ptr);
}
