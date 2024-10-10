#include "hash_tables.h"

/**
 * hash_table_set - Function toadds an element to the hash table.
 * @ht: hash table
 * @key: string key:
 * @value: value of the key
 *
 * Return: (1) Success
 * otherwise - (0)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *temp;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->value = strdup(value);
	newNode->key = strdup(key);
	newNode->next = NULL;

	index = key_index((const unsigned char *) key, ht->size);
	if (!ht->array[index])
	{
		ht->array[index] = newNode;
		return (1);
	}
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			free(newNode->key);
			free(newNode->value);
			free(newNode);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
