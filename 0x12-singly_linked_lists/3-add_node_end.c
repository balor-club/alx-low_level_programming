# include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a linked list
 * @head: head of linked list
 * @str: new string to add
 *
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->str = nchar;
	new->next = NULL;
	temp = *head;

	if (new == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
