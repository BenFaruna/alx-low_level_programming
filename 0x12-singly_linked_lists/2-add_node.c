#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add node to the beginning of list
 *
 * @head: the first element of the list
 * @str: the element to be addded
 *
 * Return: the head node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
		new_node->next = NULL;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
