#include "hash_tables.h"
#include "stdio.h"

/**
 * hash_table_print - function that prints ht
 *
 * @ht: hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *ht_temp = ht;
	unsigned long int index;
	unsigned long int count;
	hash_node_t *current;

	count = 0;

	if (ht_temp)
		return;

	printf("{");
	for (index = 0; index < ht_temp->size; index++)
	{
		current = ht_temp->array[index];

		if ((count > 0) && (current))
			printf(", ");
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			count++;
			if (current->next)
				printf(", ");
			current = current->next;
		}
	}
	printf("}\n");
}
