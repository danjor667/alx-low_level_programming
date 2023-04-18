#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog;s owner
 * Description: each field describe the dog.
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
