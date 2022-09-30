#include <stdio.h>
#include <stdlib.h>

/**
 * isNotInteger - checks if the argument is integer or not
 * @s: array of character
 * Return: 0 || 1
 */

int isNotInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - adds all the given positive numbers
 * @argc: number of argument passed
 * @argv: array to store arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)

	{
		if (isNotInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
