#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked list
 *
 * @h: pointer to head of list
 *
 * Return: the total number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
