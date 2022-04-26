#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to the end of a list
 *
 * @head: pointer to the start of the list
 * @n: the element to be added
 *
 * Return: pointer to the head or NULL on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (current->next)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
