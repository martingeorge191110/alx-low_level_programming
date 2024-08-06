#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer to pointer of the linked list
 * @index: the index of desired node
 *
 * Return: (1) Success
 * otherwise - (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);


	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);


	prev->next = temp->next;
	free(temp);

	return (1);
}
