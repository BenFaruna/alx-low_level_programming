#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds element to the end of the node
 *
 * @head: the start of the list
 * @str: the element to be added
 *
 * Return: the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	current = *head;

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
