# include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t nnodes;

	nnodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
