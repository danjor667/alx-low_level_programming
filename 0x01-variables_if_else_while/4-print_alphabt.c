#include <stdio.h>
/**
 * main - A function that skip certain iteration in a for loop
 * Return: (0)
 */
int main(void)
{
char alpha = 'a';
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	if (alpha == 'q' || alpha == 'e')
	{
		continue;
	}
	putchar(alpha);
}
putchar('\n');
return (0);
}
