#include <stdio.h>
/**
 * main - function to print the hexadecimal number
 * Return: (0)
 */
int main(void)
{
	char c = 0;
	char new;

	while (c < 16)
	{
		 new = putchar("%x", c);
		 /* putchar(new);*/
		 c++;
	}
	putchar('\n');
	return (0);
}
