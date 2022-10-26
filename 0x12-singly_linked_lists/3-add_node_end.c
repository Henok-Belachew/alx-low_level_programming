#include "lists.h"
/**
 * add_node_end - adds a new new node at the end of a list
 * @head: the head of the linked list
 * @str: the string to be stored
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *elem;
	char *data;
	list_t *p;

	data = strdup(str);
	elem = (list_t *)malloc(sizeof(list_t));
	if (elem == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		free(elem);
		return (NULL);
	}

	elem->str = data;
	elem->len = strlen(data);
	elem->next = NULL;

	/* let's handle adding the first element case*/
	if (!(*head))
	{
		*head = elem;
	}
	else
	{
		/*Getting the last element of the linked list*/
		p = *head;
		while (p->next)
		{
			p = (*head)->next;
		}
		p->next = elem;
	}

	return (elem);
}
