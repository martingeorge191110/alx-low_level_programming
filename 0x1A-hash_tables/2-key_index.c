#include "hash_tables.h"

/**
 * key_index - Function to return element index
 * @key: string key
 * @size: array size
 *
 * Return: index of the element
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
