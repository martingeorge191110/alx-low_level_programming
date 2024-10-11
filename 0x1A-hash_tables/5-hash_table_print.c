#include "hash_tables.h"

/**
 * hash_table_print - Function to print hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *seperator = "";

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
			printf("%s'%s': '%s'", seperator, temp->key, temp->value);\
			seperator = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
