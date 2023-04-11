#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry of the program
 * @argv: input
 * @argc: input
 * Return: int
 */
int main(int argc, char *argv)
{
	int sum = 0;
	int i;

	if (argc == 0)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i][0]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

