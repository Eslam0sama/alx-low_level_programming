#include "lists.h"

/**
 * free_dlistint - A function to free the allocated memorty for dlist.
 *
 * @head: The head of the list
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head->next != NULL)
	{
		current = current->next;
		free(head);
		head = current;
	}
	free(current);
	free(head);
	current, head = NULL;
}
