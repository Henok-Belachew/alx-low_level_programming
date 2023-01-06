#include "hash_tables.h"
/**
 * key_index - function gives index of a key
 *
 * @key: const unsigned char ptr to key
 * @size: unsigned long int size of array of hash table
 *
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
