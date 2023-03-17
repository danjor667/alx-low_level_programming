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

printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %zu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
