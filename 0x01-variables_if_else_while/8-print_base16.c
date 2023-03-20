#include <stdio.h>
/**
 * main - function to print the hexadecimal number
 * Return: (0)
 */
int main(void)
{
	int n;
	char new;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (new = 'a'; new <= 'f'; new++)
	{
		putchar(new);
	}
	putchar('\n');
	return (0);
}
