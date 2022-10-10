#include "dog.h"

/**
 * init_dog - function that intializes the struct dog
 * @d: struct for the dog
 * @name: dog name
 * @age: age
 * @owner: dog owner
 *
 * Return: nothing but to create the struct.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
