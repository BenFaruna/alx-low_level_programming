#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given position
 *
 * @h: pointer to head of linked list
 * @idx: index where new node is to be added
 * @n: value of new node
 *
 * Return: address to new node or  NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev, *current;
	unsigned int index = 0;

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);


	new_node->n = n;
	current = *h;
	prev = NULL;
	while (current)
	{
		if (index == idx)
		{
			new_node->next = current;
			new_node->prev = prev;
			prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		prev = current;
		current = current->next;
		index++;
	}
	return (NULL);
}
