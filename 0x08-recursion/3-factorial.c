#include "main.h"
/**
 * factorial - a function to calculate the factorial of a number
 * @n: the input number
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
