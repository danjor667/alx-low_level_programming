#include "main.h"
/**
 * _print_rev_recursion - a function that print
 * a reversed string
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
}
