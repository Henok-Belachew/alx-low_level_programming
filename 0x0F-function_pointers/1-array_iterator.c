#include "function_pointers.h"

/**
 * array_iterator - iterates on each element of an array
 * @array: the array to be itrated
 * @size: the size of the array
 * @action: the function that is itrated on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for ( ; i < size; i++)
		{
			action(array[i]);
		}
	}
}
