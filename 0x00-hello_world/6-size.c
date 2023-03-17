#include <stdio.h>
/**
 * main - A function that prints the size of the various data types in c
 * Return: 0
 */
int main(void)
{
long long int d;
char a;
int i;
float f;
long int l;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
