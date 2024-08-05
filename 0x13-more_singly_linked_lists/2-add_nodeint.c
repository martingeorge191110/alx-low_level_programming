#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer of the head of linked list
 * @n: integer value to be stored
 *
 * Return: (*head) which is pointer to the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if	(newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	} else
	{
		newNode->next = *head;
		*head = newNode;
	}

	return (*head);
}
