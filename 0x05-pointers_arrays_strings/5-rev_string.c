#include "main.h"
/**
 * rev_string - a function tha reverse a string
 * @s: string to be reversed
 * Return: (void)
 *
 */
void rev_string(char *s)
{
	char rev = s[];
	int counter;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
