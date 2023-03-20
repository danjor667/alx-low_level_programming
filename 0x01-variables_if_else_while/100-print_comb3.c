#include <stdio.h>
/**
 * main - a function with nested loop
 * Return: (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			} else
			{
				;
			}


		}
	}
	putchar('\n');
	return (0);
}
