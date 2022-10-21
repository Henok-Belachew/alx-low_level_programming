#include "lists.h"

/**
 * list_len - returns the number of elements of linked list
 * @h: pointer to the header of linked list
 *
 * Return: the number of elements of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
