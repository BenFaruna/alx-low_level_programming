#include "lists.h"

/**
 * delete_nodeint_at_index - remove node at a position
 *
 * @head: start of the list
 * @index: the position of node to be removed
 *
 * Return: 1 if it succeed or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count  = 0;
	listint_t *temp = *head;
	listint_t *prev = NULL;

	while (temp)
	{
		if (count == index)
		{
			if (prev == NULL)
			{
				*head = temp->next;
				free(temp);
				return (1);
			}
			prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		count++;
	}
	return (-1);
}
