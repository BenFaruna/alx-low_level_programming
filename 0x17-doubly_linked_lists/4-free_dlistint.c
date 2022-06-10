#include "lists.h"

/**
 * free_dlistint - frees the memory occupied by a linked list
 *
 * @head: pointer to head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
