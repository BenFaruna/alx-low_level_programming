#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_get - retrieves value associated with a key
 *
 * @ht: pointer to hash table
 * @key: the key being looked for
 *
 * Return: value associated with the key element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;
	char *value = NULL;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	if (!strlen(key))
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	current_node = ht->array[index];

	while (current_node)
	{
		if (!(strcmp(current_node->key, key)))
		{
			value = strdup(current_node->value);
			break;
		}
		current_node = current_node->next;
	}
	return (value);
}
