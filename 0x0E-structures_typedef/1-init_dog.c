#include "dog.h"
#include <stdlib.h>
/**
 * init_dog- function to initialised a
 *  new variable of type stuct dog
 *  @d: initialised variable
 *  @name: 1  field of d variable
 *  @age: 1 field of d var
 *  @owner: 1 field of d var
 *  Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).owner = owner;
		(*d).age = age;
	}
}
