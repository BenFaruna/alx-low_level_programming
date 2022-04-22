#include <stdlib.h>
#include "lists.h"

/**
 * free_list - clears the memory space allocated for a linked list
 *
 * @head: the start of the linked list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
