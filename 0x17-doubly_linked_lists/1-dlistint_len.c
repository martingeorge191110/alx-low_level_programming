#include "lists.h"

/**
 * dlistint_len - Function to returns the number of elements
 *							in a dlistint_t list
 * @h: pointer points to the head of the list
 *
 * Return: (counter) which is the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
