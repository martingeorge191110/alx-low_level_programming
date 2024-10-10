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
	hash_node_t **newArr;
	unsigned long int i = 0;

	hashTable = malloc(sizeof(hash_node_t));
	if (!hashTable)
		return (NULL);

	hashTable->size = size;
	newArr = malloc(sizeof(hash_node_t *) * size);
	if (!newArr)
		return (NULL);

	hashTable->array = newArr;

	while (i < size)
	{
		hashTable->array[i] = NULL;
		i++;
	}

	return (hashTable);
}
