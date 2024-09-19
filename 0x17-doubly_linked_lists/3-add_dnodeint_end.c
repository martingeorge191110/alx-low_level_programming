#include "lists.h"

/**
 * add_dnodeint_end - Function to adds a newNode at the end
 *						of a dlistint_t list
 * @head: pointer points to the head node
 * @n: integer value to be appended
 *
 * Return: (newNode) which is the pointer to the newNode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!(*head))
	{
		newNode->prev = (*head);
		(*head) = newNode;
	} else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}

	return (newNode);
}
