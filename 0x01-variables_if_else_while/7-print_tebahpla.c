#include <stdio.h>
/**
 * main- a function that prints the alphabet in reverse order
 * Return: (0)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
