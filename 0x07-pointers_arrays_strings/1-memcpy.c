#include "main.h"

/**
* _memcpy - function to copy memory
* @dest: destination memory
* @src: source memory
* @n: number of bytes to be copied
* Return: string copied from source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
return (dest);
}
