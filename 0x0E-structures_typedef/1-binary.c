#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value that should be found
 *
 * Return: index of value searched or -1 if it doesn't exist
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, x, max = size - 1, min = 0, mid;

	if (array == NULL)
		return (-1);

	for (i = 0; min <= max; i++)
	{
		printf("Searching in array: ");
		for (x = min; x <= max; x++)
		{
			if (x != max)
				printf("%d, ", array[x]);
			else
				printf("%d\n", array[x]);
		}

		mid = (max + min) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}

	return (-1);
}
