#include <stdio.h>
/**
 * main - A function that prints the size of the various data types in c
 * Return: 0
 */
int main(void)
{
long long int d;
printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %zu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
