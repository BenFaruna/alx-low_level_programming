#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a position
 *
 * @head: the start of the list
 * @idx: position to insert node
 * @n: value of node
 *
 * Return: Address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *prev = NULL;
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	while (temp && index <= idx)
	{
		if (index == idx)
		{
			new_node->n = n;

			if (prev == NULL)
			{
				new_node->next = temp;
				*head = new_node;
				return (new_node);
			}

			new_node->next = temp;
			prev->next = new_node;
			return (new_node);
		}

		prev = temp;
		temp = temp->next;
		index++;
	}
	return (NULL);
}
