# include "lists.h"

/**
 * pop_listint - deletes the head node and returns
 * the head node's data
 * @head: head node
 *
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	hnode = temp->n;

	h = temp->next;

	free(temp);

	*head = h;

	return (hnode);
}
