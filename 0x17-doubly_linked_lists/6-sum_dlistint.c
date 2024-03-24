#include "lists.h"

/**
 * sum_dlistint - A function to sum all numbers in a dlist
 *
 * @head: The head of the list
 *
 * Return: The sum of the list's data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	int sum = 0;

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
