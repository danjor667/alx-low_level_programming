#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
	
}
