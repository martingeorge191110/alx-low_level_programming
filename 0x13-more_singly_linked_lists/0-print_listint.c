#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head of struct listint_t
 *
 * Return: (counter)
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
