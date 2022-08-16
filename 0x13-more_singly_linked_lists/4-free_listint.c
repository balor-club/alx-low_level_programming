# include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *t, *t2;

	t = head;
	while (t != NULL)
	{
		t2 = t->next;
		free(t);
		t = t2;
	}
}
