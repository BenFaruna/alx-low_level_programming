#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the first node of a linked list
 *
 * @head: the first node of the list
 *
 * Return: the first node value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int result;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	result = temp->n;
	free(temp);

	return (result);
}
