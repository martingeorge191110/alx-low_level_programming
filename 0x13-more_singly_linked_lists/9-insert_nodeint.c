#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to haed of the linked list
 * @idx: desired index to add new node
 * @n: value to be added
 *
 * Return: (newNode)
 * otherwise - (NULL)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int count;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		if (count == idx)
		{
			*head = newNode;
		}
		return (newNode);
	}
	temp = *head;
	for (count = 0; count != idx - 1 && temp; count++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
