#include "main.h"

/**
 *is_prime_number - checks if an int is a prime number
 *@n: int
 *Return: 1(true) 0(false)
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime(n, 2));
	else
		return (0);
}
/**
 *prime - checks if n is a prime number
 *@d: divisor
 *@n: int number
 *Return: int
 */
int prime(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d > (n / 2))
		return (1);
	return (prime(n, d + 1));
}
