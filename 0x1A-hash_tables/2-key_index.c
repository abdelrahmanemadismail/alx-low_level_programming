#include "hash_tables.h"

/**
 * key_index - Return the index at which the key should be stored in the array
 * @key: The key to be hashed.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}

