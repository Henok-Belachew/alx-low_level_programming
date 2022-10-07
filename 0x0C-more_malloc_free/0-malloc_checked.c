#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: the amount of size to e allocated
 *
 * Return: a pointer to the alloaced memeory or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
	{
		exit(98);
	}

	p = (void *)malloc(b);

	return (p);
}
