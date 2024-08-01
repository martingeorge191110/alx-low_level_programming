#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer of structure list_t
 *
 * Return: (length)
 */

size_t print_list(const list_t *h)
{
	size_t length;

	length = 0;
	if (!h)
		return (length);

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		length++;
	}

	return (length);
}
