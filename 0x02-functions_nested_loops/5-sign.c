#include "main.h"
/**
 * print_sign - a function that print the signe of a number
 * @n: the number to be checked
 * Return: (1) if greater than (0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_puitchar('-');
		return (-1);
	}
}
