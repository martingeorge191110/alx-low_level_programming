#include "lists.h"

/**
 * add_node_end - function that adds a new node
 *						at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string ro be added t the new node
 *
 * Return: (*head)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	int charLen = 0;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	while (str[charLen] != '\0')
		charLen++;

	newNode->len = charLen;
	newNode->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (*head);
}
