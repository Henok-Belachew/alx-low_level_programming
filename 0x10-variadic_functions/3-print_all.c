#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints formated statement
 * @format: cotains the order to be formated
 */

void print_all(const char * const format, ...)
{
	int length;
	va_list args;
	char arg1;
	int arg2;
	float arg3;
	char *arg4;

	length = strlen(format);
	va_start(args, format);
	while (format[length])
	{
		switch (format[length])
		{
		case 'c':
			arg1 = va_arg(args, char);
			printf("%c", arg1);
			break;
		case 'i':
			arg2 = va_arg(args, int);
			printf("%d", arg2);
			break;
		case 'f':
			arg3 = va_arg(args, float);
			printf("%f", arg3);
			break;
		case 's':
			arg4 = va_arg(args, char *);
			if (!arg4)
			{
				printf("(nil)");
				break;
			}
			printf("%s", arg4);
			break;
		}
	length++;
	}
	printf("\n");
}
