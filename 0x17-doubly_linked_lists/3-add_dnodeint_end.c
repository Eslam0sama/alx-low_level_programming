#include "lists.h"

/**
 * add_dnodeint_end - A function that add a node at the end of the list
 *
 * @head: The head of the list
 * @n: The number to be added
 *
 * Return: Return the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->prev = temp;
		temp->next = new;
	}
	return (new);

}
