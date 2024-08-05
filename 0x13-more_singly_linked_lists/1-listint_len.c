#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: pointer to the header of linked list
 *
 * Return: (counter)
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
