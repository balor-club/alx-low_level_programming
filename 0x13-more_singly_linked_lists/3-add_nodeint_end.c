# include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of al inked list
 * @head: head of a linked list
 * @n: node
 *
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *t;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	t = *head;
	if (t == NULL)
		*head = new;
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = new;
	}

	return (new);
}
