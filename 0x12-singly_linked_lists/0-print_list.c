#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	unsigned int node_count = 0;

	while (h != NULL)
	{
		++node_count;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h =h->next;
	}

	return (node_count);
}
