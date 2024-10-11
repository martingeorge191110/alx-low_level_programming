#include "hash_tables.h"

/**
 * hash_table_delete - Functyion to delete hash tale
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *prev;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			prev = temp;
			free(temp->key);
			free(temp->value);
			temp = temp->next;
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
