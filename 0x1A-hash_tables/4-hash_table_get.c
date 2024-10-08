#include "hash_tables.h"

/**
 * hash_table_get - Function to retrieves a value associated with a key.
 * @ht: hash table
 * @key: specific node key
 *
 * Return: (value)
 * otherwise - (NULL)
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	if (!ht->array[index])
		return (NULL);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}
