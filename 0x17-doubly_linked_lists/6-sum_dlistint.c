#include "lists.h"

/**
 * sum_dlistint - sum up all the elements in a linked list
 *
 * @head: pointer to head of linked list
 *
 * Return: the sum of all data of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (total);
	}

	current = head;
	while (current)
	{
		total = total + current->n;
		current = current->next;
	}
	return (total);
}
