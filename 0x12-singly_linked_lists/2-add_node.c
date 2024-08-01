#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of struct type list_t
 * @str: string to be added in this struct
 *
 * Return: (*head) which is pointer of new node
 * otherwise - (NULL)
 */

list_t *add_node(list_t **head, const char *str)
{
	int chars_len = 0;
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	while (str[chars_len] != '\0')
		chars_len++;

	new_node->len = chars_len;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
