#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
