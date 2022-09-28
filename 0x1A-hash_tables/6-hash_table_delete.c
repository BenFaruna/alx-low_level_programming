#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes hash table
 *
 * @ht: hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	hash_node_t *temp_next;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			temp_next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp_next;
		}
	}
	free(temp_next);
	free(ht->array);
	free(ht);
}
