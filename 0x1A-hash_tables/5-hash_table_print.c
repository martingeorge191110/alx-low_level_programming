#include "hash_tables.h"

/**
 * hash_table_print - Function to print hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *temp;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		temp = ht->array[i];
		while (temp)
		{
			printf("%s'%s': ''%s'", i == 0 ? "" : ', ', temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
