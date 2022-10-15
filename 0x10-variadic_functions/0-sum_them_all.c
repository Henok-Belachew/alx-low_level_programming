#include "variadic_functions.h"

/**
 * sum_them_all - sums all the passed integer arguments
 * @n: number of arguments that is passed
 *
 * Return: the summ or 0 if no arguments is passed
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	count i = 0;
	if (n == 0)
	{
		return (0);
	}
	va_list theList;
	va_start (theList,n);
	for (; i < n; i++)
	{
		sum += var_arg(theList,int);
	}
	va_end(theList);
	return (sum);
}
