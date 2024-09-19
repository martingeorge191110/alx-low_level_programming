#include "lists.h"

/**
 * delete_dnodeint_at_index - Function to delete a node at specifc idx
 * @head: pointer poits to pointer to the head node
 * @index: index
 *
 * Return: (1) Success
 * otherwise - (-1)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int counter = 0;

	while (temp)
	{
		if (counter == index)
		{
			if (!temp->prev)
			{
				*head = temp->next;
					if (temp->next)
						temp->next->prev = NULL;
			} else if (temp->prev && temp->next)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
			} else
			{
				temp->prev->next = NULL;
			}
			free(temp);
			return (1);
		}
		temp = temp->next;
		counter++;
	}

	return (-1);
}
