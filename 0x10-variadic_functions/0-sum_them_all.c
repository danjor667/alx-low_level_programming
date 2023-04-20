#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all- function to evaluate the sum of
 * a given set of numbers
 * @n: numbers of element to be summed up
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
