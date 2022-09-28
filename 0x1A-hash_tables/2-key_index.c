#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: key used
 * @size: size of array of hash table
 *
 * Return: the index value where key-value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
