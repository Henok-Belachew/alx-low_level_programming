#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of argument passed
 * @argv: array of arguments
 *
 * Return: returns nothing
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;

	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}


	sscanf(argv[1], "%d", &x);
	sscanf(argv[2], "%d", &y);

	printf("%d\n", x * y);

	return (0);
}
