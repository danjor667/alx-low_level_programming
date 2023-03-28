#include "main.h"
/**
 * print_rev - a function that print a string in reverse
 * @s: the string
 * Return: (void)
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

