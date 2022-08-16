# include "lists.h"

/**
 * sum_listint - returns sum of all the data
 * @head: head of linked list
 *
 * Return: sum of n
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
