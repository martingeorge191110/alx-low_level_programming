#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 *							of a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: (counter)
 */

int sum_listint(listint_t *head)
{
	int counter = 0;
	listint_t *temp;

	if (!head)
		return (counter);

	temp = head;
	while (temp->next)
	{
		counter += temp->n;
		temp = temp->next;
	}

	return (counter);
}
