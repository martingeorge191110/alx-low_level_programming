#include "lists.h"

/**
 * print_dlistint - Function to prints all the elements of a dlistint_t list
 * @h: pointer points to the head of the list
 *
 * Return: (counter) which is the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
