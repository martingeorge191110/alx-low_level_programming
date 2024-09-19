#include "lists.h"

/**
 * insert_dnodeint_at_index - Function to inserts
 *										a new node at a given position
 * @h: pointer points to pointer to the head node
 * @idx: desired index
 * @n: integer data to be inserted
 *
 * Return: pointer to the new node
 * otherwise - NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode;
	unsigned int counter = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		while (temp)
		{
			if (counter == idx - 1)
			{
				if (!temp->next)
					return (add_dnodeint_end(h, n));

				newNode = malloc(sizeof(dlistint_t));
				if (!newNode)
					return (NULL);

				newNode->prev = temp;
				newNode->n = n;
				newNode->next = temp->next;

				if (temp->next)
					temp->next->prev = newNode;

				temp->next = newNode;
				return (newNode);
			}
			counter++;
			temp = temp->next;
		}
	}
	return (NULL);
}
