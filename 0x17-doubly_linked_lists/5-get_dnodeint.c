#include "lists.h"

/**
 * get_dnodeint_at_index - A function to get a node with a specific index
 *
 * @head: The head of the list
 * @index: The index of the needed node
 *
 * Return: The node at a specific index, or NULL if index is out of range
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	unsigned int count = 0;

	current = head;

	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}
