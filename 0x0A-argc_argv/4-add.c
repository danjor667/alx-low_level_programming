#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point of the programm
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
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
		iiiiiiiiiii{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
