#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a funtion to add concatenate 
 * n char from str2 to s1
 * @s1: destination input string
 * @s2: source input string
 * Return: pointer to new strig memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if  (s2 == NULL)
	{
		s2 = "";
	}
	if (n > strlen(s2))
	{
		n = strlen(s2);
	}
	str = malloc((strlen(s1) + n) + 1);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	for (i = 0; i < n; i++)
	{
		str[strlen(s1) + i] = s2[i];
	}
	str[strlen(s1) + n] = '\0';
return (str);
}
