#include <stdio.h>


/**
 * main - main function that returns the program filename
 * @argc: number of argument
 * @argv: character string
 *
 * Return: returns nothing
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
