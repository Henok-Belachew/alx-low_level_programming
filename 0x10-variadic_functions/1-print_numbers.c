#include "variadic_functions.h"

/**
 * print_numbers - prints number followed by a new line
 * @separator: a string to be printed between numbers
 * @n: number of arguments passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	count i = 0;
	va_list theList;

	va_start(theList, n);
	if (separator && n)
	{
		for (; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(theList, int));
				continue;
			}

			printf("%d%s", va_arg(theList, int), separator);
		}
		printf("\n");
	}
	va_end(theList);
}
