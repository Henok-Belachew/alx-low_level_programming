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
	list_t *p;


	elem = (list_t *)malloc(sizeof(list_t));
	if (elem == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	elem->str = strdup(str);
	elem->len = strlen(str);
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
			p = p->next;
		}
		p->next = elem;
	}

	return (elem);
}
