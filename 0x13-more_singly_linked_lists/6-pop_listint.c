#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *						and returns the head node’s data (n).
 *	@head: pointer to pointer of the linked list\
 *
 * Return: (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (n);
}
