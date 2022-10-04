#include "main.h"

/**
 * create_array - creates an array of chars at runtime
 * @size: the size of the array
 * @c: the char that is going to be assigned for the array
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int i = 0;

	str = malloc(size);

	if (size == 0)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
