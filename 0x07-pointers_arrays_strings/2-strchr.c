#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: string pointer.
 * @c: character.
 * Return: first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
	if (*s == c)
		return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	else
	return (NULL);
}
