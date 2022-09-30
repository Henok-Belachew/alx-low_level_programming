#include <stdio.h>

/**
 * main - function that prints the number of arguments passed
 * @argc: argument count
 * @argv: charater array of passed arguments
 *
 * Return: 0
 */





int main(int argc __attribute__((unused)), char *argv[])
{
	*argv = *argv;
	int num = sizeof(argv) / sizeof(argv);

	printf("%d\n", num);

	return (0);
}
