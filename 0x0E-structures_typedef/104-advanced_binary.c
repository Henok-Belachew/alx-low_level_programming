#include "search_algos.h"

/**
 * advanced_binary -  searches for a value in a sorted array of integers, but
 * returns the index of the first coincidence in case there is repeated values
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 If value is not present in array or if array is NULL,
 * otherwise return the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_recursive(array, 0, size - 1, value));
}

/**
 * binary_recursive - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @left: Position initial of the array
 * @right: Position final of the array
 * @value: is the value to search for
 *
 * Return: -1, if value is not present in array or if array is NULL,
 * otherwise return the index where value is located
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t middle = 0, i = 0;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);

	middle = (right + left) / 2;

	if (array[middle] == value && (middle == left || array[middle - 1] != value))
		return ((int)middle);

	else if (array[middle] >= value)
		return (binary_recursive(array, left, middle, value));

	return (binary_recursive(array, middle + 1, right, value));
}
