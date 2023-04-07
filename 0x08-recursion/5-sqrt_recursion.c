#include "main.h"
/**
 * _sqrt_recursion - a function that calculate the natural
 * square root of a number
 * @n: input number
 * Return: -1 if natural squaroot dont exist
 */
int _sqrt_recursion(int n)
{
	return (sqr(n, 0, n));
}
/**
 * sqr - a helper function
 * @n:input numper from the principal function
 * @start: startting of range (always = 0)
 * @end: end of range always (alway = n)
 * Return: int
 */
int sqr(int n, int start, int  end)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}
	else
	{
		long int mp = start + (end - start) / 2;

		if (mp * mp == n)
		{
			return (mp);
		}
		else if (mp * mp > n)
		{
			return  (sqr(n, 0, mp - 1));
			/**
			 * (m-1) here  or (m+1)in line 49
			 * is to adjust the range
			 * to prevent infinite recurssion
			 * like for when n = 25
			 */
		}
		else if ((mp + 1) * (mp + 1) > n)
		{
			return (-1);
		}
		else
		{
			return (sqr(n, mp + 1, n));
		}
	}
}
