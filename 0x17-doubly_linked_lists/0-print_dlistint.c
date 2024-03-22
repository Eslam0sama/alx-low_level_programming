#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0; // Counter to keep track of the number of elements printed

    if (h == NULL)
    {
        return 0; // Return 0 if the list is empty
    }
    else
    {
        while (h != NULL)
        {
            printf("%d ", h->n); // Print the current node's value
            count++; // Increment the counter
            h = h->next; // Move to the next node
        }
        printf("\n"); // Print a newline after printing all elements
    }
    return count; // Return the number of elements printed
}
