#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements in a linked list
 *
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		++node_count;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (node_count);
}
