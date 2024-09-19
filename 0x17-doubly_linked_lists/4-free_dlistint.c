#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pinter to the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
