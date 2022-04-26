#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 *
 * @head: pointer to start of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while(head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
	free(temp);
}
