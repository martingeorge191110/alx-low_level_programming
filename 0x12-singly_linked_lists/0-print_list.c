#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer of structure list_t
 *
 * Return: (length)
 */

size_t print_list(const list_t *h)
{
	list_t *ptr = h;
	size_t length = 0;

	if (!ptr)
		return (length);

	while (ptr)
	{
		if (!ptr->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n");

		ptr = ptr->next;
		length++;
	}

	return (length);
}
