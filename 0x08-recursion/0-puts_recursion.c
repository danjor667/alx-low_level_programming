#include "main.h"
/**
 * _puts_recursion - a fuction that print a string
 * to the stdout using recursion
 * @s: the input string
 * Return void
 */
void _puts_recursion(char *s)
{

	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
	return;
}
