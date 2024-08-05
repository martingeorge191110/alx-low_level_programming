#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of the head of the linked list
 * @n: integer value to be stored
 *
 * Return: (*head)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if	(newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
	} else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

		return (*head);
}
