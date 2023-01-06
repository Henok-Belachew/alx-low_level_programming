#include "hash_tables.h"
/**
 * hash_table_delete - function deletes a hash table
 *
 * @ht: ptr to hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int x = 0;
	hash_node_t *node = NULL;
	hash_node_t *temp = NULL;

	for (; x < ht->size; x++)
	{
		node = ht->array[x];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
