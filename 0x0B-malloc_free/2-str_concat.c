#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function to concatenate 2 string
 * and return it in a diff mem location
 * @s1: input string
 * @s2: 2nd input str
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new_str = malloc(strlen(s1) + strlen(s2) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < strlen(s1); i++)
		{
			new_str[i] = s1[i];
		}
		i = 0;
		for (j = strlen(s1); j < (strlen(s1) + strlen(s2)); j++)
		{
			new_str[j] = s2[i];
			i++;
		}
		new_str[j] = '\0';
		return (new_str);
	}
}
