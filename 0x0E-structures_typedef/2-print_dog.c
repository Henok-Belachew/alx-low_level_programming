#include "dog.h"

/**
 * print_dog - prints all the values for the struct
 * @d:struct for dog
 *
 * Return: nothing but to display all the values for the struct elements.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("nil\n");
		}

		if (d->age)
		{
			printf("Age: %1.f\n", d->age);
		}
		else
		{
			printf("nil\n");
		}
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("nil\n");
		}
	}
}
