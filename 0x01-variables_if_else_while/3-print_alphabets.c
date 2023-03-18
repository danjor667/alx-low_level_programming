#include <stdio.h>
/**
 * main - A function that prints both upper and lower case aiphabett
 * Return: (0)
 */
int main(void)
{
char lower = 'a';

char upper = 'A';
for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
for (upper = 'A'; upper <= 'Z'; upper++)
	putchar(upper);
putchar('\n');
return (0);
}
