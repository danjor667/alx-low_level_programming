#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: the number passed as parameter
 * Return: (last digit)
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}
