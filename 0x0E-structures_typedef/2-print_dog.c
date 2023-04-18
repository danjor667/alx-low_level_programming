#include "dog.h"
#include <stdlib.h>
/**
 * print_dog- function to print all the field of
 * the variable dog
 * @d: the variable dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", d->name);
		print("Age: %f\n", d->age);
		if ((*d).owner != NULL)
			printf("Owner: %S\n", d->owner);
	}
}
