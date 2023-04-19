#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name- function to print name
 * using another function
 * @name: pointer to the input name
 * @f: function that performs the 
 * printing action.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		exit(89);
	}
	f(name);
}
