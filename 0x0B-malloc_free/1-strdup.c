#include "main.h"

/**
* _strdup -> copies a string
* @str: string to be dupliated
* Return: a string pointer and NULL if null
*/
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *snt;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	snt = (char *)malloc(i * sizeof(char) + 1);
	if (snt == NULL)
		return (NULL);
	while (j < i)
	{
		snt[j] = str[j];
		j++;
	}
	snt[j] = '\0';
	return (snt);
}
