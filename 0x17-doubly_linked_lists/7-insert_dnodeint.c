#include "lists.h"
/**
 * insert_dnodeint_at_index - A function that insert a node at specific index
 *
 * @h: The head of the list
 * @idx: The index needed
 * @n: The number to be added at the index
 *
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *current, *node;

	unsigned int index = 0;

	current = temp = *h;
	node = malloc(sizeof(dlistint_t));
	node->prev = NULL;
	node->next = NULL;
	node->n = n;
	if (idx == 0 || current == NULL)
		{
			current->prev = node;
			node->next = current;
			*h = node;
			return (node);
		}
	while (current != NULL)
	{
		if (idx == index && idx != 0)
		{
			node->next = current;
			current->prev = node;
			temp->next = node;
			node->prev = temp;
			return (node);
		}
		temp = current;
		current = current->next;
		index++;
	}
	if	(current == NULL && index == idx)
		{
			temp->next = node;
			node->prev = temp;
			return (node);
		}
	return (NULL);
}
