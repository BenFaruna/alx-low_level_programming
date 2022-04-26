#include "lists.h"

/**
 * sum_listint - sum all the elements of a linked list
 *
 * @head: the start of the list
 *
 * Return: the sum of all nodes in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (sum);

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
