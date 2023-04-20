#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 If value is not present in array or if array is NULL,
 * otherwise return the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left = 0, right = 0, middle = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (; i < size && array[i] < value; i *= 2)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		left = i;
	}

	i = i < size - 1 ? i : size - 1;
	right = i;
	printf("Value found between indexes [%ld] and [%ld]\n", left, i);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);
		middle = (left + right) / 2;

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
