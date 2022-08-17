# include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head node
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	if (head != 0)
	{
		p = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = p;
	}

	*head = n;
	return (*head);
}
