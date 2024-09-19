#include "lists.h"

/**
 * get_dnodeint_at_index - Function to get node at specific index
 * @head: pointer to the head node
 * @index: index
 *
 * Return: pointer to the desired node
 * otherwise - NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	while (temp)
	{
		if (counter == index)
			return (temp);

		temp = temp->next;
		counter++;
	}

	return (NULL);
}
