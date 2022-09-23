#include "main.h"

/**
* reverse_array -  function that reverse an array of integers
* @a: pointer array.
* @n: number of array.
*
* Return: nothing!
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
