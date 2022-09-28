#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to hash table
 * @key: hey
 * @value: value
 *
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int ht_size;
	hash_node_t *node;

	ht_size = ht->size;

	index = key_index((unsigned char *)key, ht_size);
	node = create_node(key, value);

	if (ht->array[index] != NULL)
		node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}

/**
 * create_node - creates hash_table node from key and value_type
 * @key: key
 * @value: value_type
 *
 * Return: hash table node with key and value or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}
