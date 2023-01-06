#include "hash_tables.h"
/**
 * hash_djb2 - function implements djb2 hash algo
 *
 * @str: const unsigned char ptr to string to be hashed
 *
 * Return: a hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
