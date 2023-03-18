#include <stdio.h>
/**
 * main - A function that prints the alphabet
 * Return: (0)
 */
int main(void)
{
char alpha = 'a';

for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
putchar('\n');
return (0);
}
