#include "lists.h"

/**
 * get_nodeint_at_index - eturns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: the desired index of the linkde list
 *
 * Return: (temp)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = head;
	while (temp && count != index)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}
