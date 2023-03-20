#include <stdio.h>
/**
 * main - A function that print number using the putchar function
 * Return: (0)
 */
int main(void)
{
	int start = 0;

	for (start = 0; start <= 9; start++)
	{
		putchar('0' + start);
	}
	putchar('\n');
	return (0);
}

