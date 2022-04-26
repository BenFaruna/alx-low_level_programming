#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node
 *
 * @head: the start of the list
 * @index: the node index
 *
 * Return:the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;


	while (temp)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}

	return (NULL);
}
