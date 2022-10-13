#include "function_pointers.h"

/**
 * print_name - prints a name passed using callback function
 * @name: name to be print
 * @f: function to print passed name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
