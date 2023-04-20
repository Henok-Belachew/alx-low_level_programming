#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: input array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of array where value is found, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int start, end, pos;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		if (start == end)
		{
			if (array[start] == value)
				return (start);
			return (-1);
		}

		pos = start + (((double)(end - start) /
				(array[end] - array[start])) *
			       (value - array[start]));

		if (pos > end)
		{
			printf("Value checked array[%i] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%i] = [%i]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			start = pos + 1;
		else
			end = pos - 1;
	}

	return (-1);
}
