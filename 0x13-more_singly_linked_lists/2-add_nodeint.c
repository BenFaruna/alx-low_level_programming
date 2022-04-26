#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint - add node at the start of a list
 *
 * @head: pointer to head of  list
 * @n: the element to be added
 *
 * Return: pointer to new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (*head);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
