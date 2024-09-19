#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer points to pointer which points to head
 * @n: integer valuje to be added
 *
 * Return: (*head) which is the head node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if ((*head))
		(*head)->prev = newNode;

	(*head) = newNode;

	return (*head);
}
