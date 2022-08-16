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
	listint_t *temp;
	
	if (*head == NULL)
		return (0);

	if ((*head)->next != NULL)
		temp = (*head)->next;
	else
	{
		free(*head);
		*head = NULL;
	}
	if (*head)
	{
		free_listint2(&temp);
		free(*head);
	}
	*head = NULL;
}
