#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int i;
	va_list args;
	unsigned int count = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (separator == NULL)
		{
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
			printf("\n");
			va_end(args);
			return;
		}
		count++;
		if (count != n)
		{
			printf("%s", string);
			printf("%s", separator);
		}
		else
		{
			printf("%s", string);
			printf("\n");
			va_end(args);
		}
	}
}
