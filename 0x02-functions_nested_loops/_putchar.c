#include <unistd.h>
/**
 * main - implementing the _putchar function
 * Return: -1 if failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
