#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main- entry point of the program
 * @argc: number of input items
 * @argv: array of input element
 * Return: int
 */
int main(int argc, char **argv)
{
	char *op = argv[2];
	int (*used_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	used_function = get_op_func(op);
	if (strlen(op) != 1 || used_function == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (*op == '%' || *op == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", used_function(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
