#include "lists.h"

/**
 * sum_dlistint - returns sum of all data
 * @head: head node
 *
 * Return: sum of all data, 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
