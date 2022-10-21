#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head noe of linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
			continue;
		}

		printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	return (i);
}
