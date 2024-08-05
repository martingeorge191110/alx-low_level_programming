#include "lists.h"

/**
 * free_listint2 - frees a listint_t list with setting head to null
 * @head: pointer to pointer of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
