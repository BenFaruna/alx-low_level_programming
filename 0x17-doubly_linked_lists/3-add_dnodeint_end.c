#include "lists.h"

/**
 * add_dnodeint_end - adds element to the end of the list
 *
 * @head: pointer to the head of the list
 * @n: the value of the node
 *
 * Return: the address of the new element added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current_node->next)
		{
			current_node = current_node->next;
		}
		new_node->prev = current_node;
		current_node->next = new_node;
	}
	return (new_node);
}
