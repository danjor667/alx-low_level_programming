#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers- function to print a list of
 * number seperated by a string
 * @separator: input string
 * @n:number of element
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int count = 0;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
		printf("\n");
		va_end(args);
	}
	for (i = 0; i < n; i++)
	{
		count++;
		if (count != n)
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
		else
		{
			printf("%d", va_arg(args, int));
		}
	}
	printf("\n");
	va_end(args);
}
