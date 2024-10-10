#include "hash_tables.h"

/**
 * hash_table_create - Function that creates new hash table
 * @size: size of the array
 *
 * Return: (hashTable)
 * otherwise - (NULL)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i;

	hashTable = malloc(sizeof(hash_node_t));
	if (!hashTable)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashTable->array)
	{
		free(hashTable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;

	return (hashTable);
}
