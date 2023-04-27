#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - a function that returns
 * the number of element in a list
 * @h: the hesd of the list
 * Return: the num of ele
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
