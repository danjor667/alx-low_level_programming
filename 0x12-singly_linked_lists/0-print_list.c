#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - a function that displays the element of
 * a linkedlist
 * @h: the pointer to the head of the list
 * Return: the number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
