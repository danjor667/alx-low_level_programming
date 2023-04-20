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
			int x = va_arg(args, int);

			printf("%d", x);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		count++;
		if (count != n)
		{
			printf("%d%s", x, separator);
		}
		else
		{
			printf("%d", x);
		}
	}
	print("\n");
	va_end(args);
}
