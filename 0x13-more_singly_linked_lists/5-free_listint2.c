#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees linked_list and set head to NULL
 *
 * @head: pointer to start of list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;

	while (head)
	{
		temp = (*head)->next;
		free(*head);
		if (temp != NULL)
			*head = temp;
		else
			head = NULL;
	}
}
