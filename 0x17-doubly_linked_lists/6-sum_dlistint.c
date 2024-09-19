#include "lists.h"

/**
 * sum_dlistint - Function to returns the sum of all the data
 * @head: pointer to haed node
 *
 * Return: (result)
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		result += temp->n;
		temp = temp->next;
	}

	return (result);
}
