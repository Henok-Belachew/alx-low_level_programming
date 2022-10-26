#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the had for the linked list
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;
	while (p)
	{
		free(p);



		p = p->next;
		
