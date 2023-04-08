#include <stdio.h>
#include "main.h"
/**
 * main - entry function
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; (i <= argc - 1); i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
