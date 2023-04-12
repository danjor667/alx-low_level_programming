#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that copy a string
 * to a new array
 * @str: input string to copy
 * Return: pointer to new array
 */
char *_strdup(char *str)
{
	char *new_array;
	int i = 0;

	new_array = malloc(sizeof(*new_array) * strlen(str) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		new_array[i] = str[i];
		i++;
	}
	return (new_array);
}

