#include "main.h"
/**
 * _strncpy - a function that concatenate the first n char to another
 * string
 * @n: the number of char to be add to the dest string
 * @dest: the destination string
 * @src: the source string
 * Return: (char)
 */
char *_strncpy(char *dest, char *src, int n)
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
	for (i = 0; i < n; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
