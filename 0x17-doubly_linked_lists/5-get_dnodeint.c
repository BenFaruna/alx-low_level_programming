#include "lists.h"

/**
 * get_dnodeint_at_index - find the nth node of a linked list
 *
 * @head: pointer to head of list
 * @index: the index of the node
 *
 * Return: node at index or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current;

	current = head;
	while (current)
	{
		if (count > index || current == NULL)
			return (NULL);
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
