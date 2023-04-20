#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: is a pointer to the head of the skip list to search in
 * @value: is the value to search for
 *
 * Return: a pointer on the first node where value is located, otherswise
 * return NULL If value is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = NULL, *before = NULL;

	before = list;
	head = list;

	if (!list)
		return (NULL);

	while (head->n < value && head->next)
	{
		before = head;
		if (head->express)
		{
			head = head->express;
			printf("Value checked at index [%ld] = [%d]\n", head->index, head->n);
		}
		else
			for (; head->next; head = head->next)
				;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	       before->index, head->index);

	while (before->n < value && before->index < head->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", before->index, before->n);
		before = before->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", before->index, before->n);
	return (before->n == value ? before : NULL);
}
