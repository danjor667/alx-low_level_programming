#include <stdio.h>
#include "main.h"
/** main - the entry point
 * @argc: input argument 
 * @argv: input argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
