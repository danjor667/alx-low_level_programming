#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry function
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int sum;

	sum = atoi(argv[1]) * atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
