#include "lists.h"

/**
 * listint_len - counts the number of nodes in a list
 *
 * @h: pointer to head of list
 *
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
