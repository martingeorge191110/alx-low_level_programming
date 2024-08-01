#include "lists.h"

/**
 * list_len - function that returns the number of
 *						elements in a linked list_t list.
 * @h: pointer to structure of list_t
 *
 * Return: (length)
 */

size_t list_len(const list_t *h)
{
	size_t legnth;

	legnth = 0;
	if (!h)
		return (legnth);


	while (h)
	{
		legnth++;
		h = h->next;
	}

	return (legnth);
}
