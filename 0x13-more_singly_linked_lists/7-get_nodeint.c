# include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a linked list
 * @index: index of the node
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
