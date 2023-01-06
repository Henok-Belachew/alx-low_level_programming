#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 *
 * @size: unsigned int size of array
 *
 * Return: ptr to new hash table, or NULL on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x = 0;

	/* allocate memory for hash table, check if NULL */
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);
	if (size < 1)
		return (NULL);
	/* allocate memory for  entries in hash table */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	/* set entries to NULL to be able to search properly */
	while (x < size)
	{
		new_table->array[x] = NULL;
		x++;
	}
	return (new_table);
}
