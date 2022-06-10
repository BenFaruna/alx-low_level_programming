#include "lists.h"

/**
 * add_dnodeint - add elements to the head of a linked list
 *
 * @head: pointer to head of the linked list
 * @n: value of element
 *
 * Return: the address of the new element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
