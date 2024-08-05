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
	const listint_t *temp;

	counter = 0;
	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (counter);

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		counter++;
		temp = temp->next;
	}

	return (counter);
}
