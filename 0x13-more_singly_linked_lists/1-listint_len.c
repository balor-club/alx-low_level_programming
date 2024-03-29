# include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: head of linked list
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes;

	nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}

	return (nnodes);
}
