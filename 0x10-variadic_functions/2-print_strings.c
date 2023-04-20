#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings- function to print the strings passed
 * as arguments
 * @separator: input separator
 * @n: number of element
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	unsigned int count = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		count++;
		if (count < n && separator != NULL)
		{
		printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
