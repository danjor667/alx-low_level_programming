#include <stdio.h>
#include "lists.h"
 /** 
  *print_listint - a functionthat prints the all the nodes of z list
  *@h: pointer to yhe head of linked list
  *Return: An integer of the number of noddd
  */
 size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
 }
