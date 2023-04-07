#include "main.h"

/**
 *is_prime_number - a function that checks for a prime no
 *@n: int
 *Return: (true if 1) (false if 0)
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (prime(n, 2));
	}
	else
	{
		return (0);
	}
}
/**
 *prime - a function that checks is a number is prime
 *@y: divisor
 *@n: int number
 *Return: int
 */
int prime(int n, int y)
{
	if (n % y == 0)
	{
		return (0);
	}
	if (y > (n / 2))
	{
		return (1);
	}
	return (prime(n, y + 1));
}
