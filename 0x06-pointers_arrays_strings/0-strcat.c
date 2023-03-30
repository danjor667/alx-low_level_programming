#include "main.h"
/**
 * _strcat - a function to concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * Return: (char)
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		destlen++;
		i++;
	}
	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}
	for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
