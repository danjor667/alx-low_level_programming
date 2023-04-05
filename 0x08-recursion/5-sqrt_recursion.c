#include "main.h"
int _sqrt_recursion(int n)
{
	int x;
	x = n^(0.5);

	if (x*x == n)
	{
		return (x);
	}
	else
	{
		return (-1);
	}
}

