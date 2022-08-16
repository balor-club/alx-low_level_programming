# include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}
