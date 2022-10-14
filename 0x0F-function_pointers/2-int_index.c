#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: the size of an array
 * @cmp: pointer to a function
 * @array: the array
 *
 * Return: the index of the first element and returns -1 if no matche found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for ( ; i < size; i++)
		{
			index = cmp(array[i]);
			if (index != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
