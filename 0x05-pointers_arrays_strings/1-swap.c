#include"main.h"
/**
 * swap_int - A function that swap the
 * values of two intergers
 * @a: the value of the integer
 * @b: value of the 2nd integer
 * Return (void)
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
