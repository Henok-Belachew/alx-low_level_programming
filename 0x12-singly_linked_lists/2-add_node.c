#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to theader of the list
 * @str: string for the new node
 *
 * Return: the address of the new element, or null if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *elem;
	char *data;

	elem = (list_t *)malloc(sizeof(list_t));

	/*Handling the malloc functin return*/
	if (!elem)
	{
		return (NULL);
	}
	/*copyinng passed string to a new string variable */
	data = strdup(str);

	elem->next = *head;
	elem->str = data;
	elem->len = strlen(data);
	
	/*making the new element a head for list */
	*head = elem;
	return (elem);
}
