#include "main.h"

/**
 * _strdup- copies a string
 * @str: string to be copied
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *snt;
	unsigned int j;

	snt = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (; j < strlen(str); j++)
	{
		snt[j] = str[j];
	}

	return (snt);
}