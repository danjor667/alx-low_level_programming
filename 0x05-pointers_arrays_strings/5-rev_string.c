#include "main.h"
/**
 * rev_string - a function tha reverse a string
 * @s: string to be reversed 
 * Return: (void)
 *
 */
void rev_string(char *s)
{
	char temp;
	int i, j;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	i = 0;
	j = len - 1;
	while (i != j)
	{
		temp = *s[i];
		*s[i] = *s[j];
		*s[j] = temp;
	}
}
