#include "variadic_functions.h"
#include <string.h>



void sep(int j, int size)
{
	if (j < (size - 1))
	{
		printf(", ");
	}
}

/**
 * print_all - prints formated statement
 * @format: cotains the order to be formated
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char arg1;
	int arg2;
	float arg3;
	char *arg4;
	int len = strlen(format);

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			arg1 = va_arg(args, int);
			printf("%c", arg1);
			sep(i, len);
			break;
		case 'i':
			arg2 = va_arg(args, int);
			printf("%d", arg2);
			sep(i, len);
			break;
		case 'f':
			arg3 = va_arg(args, double);
			printf("%f", arg3);
			sep(i, len);
			break;
		case 's':
			arg4 = va_arg(args, char *);
			if (!arg4)
			{
				printf("(nil)");
				sep(i, len);
				break;
			}
			printf("%s", arg4);
			sep(i, len);
			break;
		}
	i++;
	}
	printf("\n");
}
