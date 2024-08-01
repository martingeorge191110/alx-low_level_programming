#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the struct of list_t
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		temp = head->next;
		free(head->str);
		free(head->len);
		head = temp;
	}
}
