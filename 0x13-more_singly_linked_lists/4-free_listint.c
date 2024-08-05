#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the header of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
