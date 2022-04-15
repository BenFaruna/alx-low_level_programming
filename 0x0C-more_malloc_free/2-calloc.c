#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of 'nmemb' elements of 'size' bytes
 *
 * @nmemb: the number of elements space needed
 * @size: the size needed for each element
 *
 * Return: pointer to the allocated memory or NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem = malloc(nmemb * size);

	if (mem == NULL || nmemb == NULL || size == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		mem[i] = "";

	return (mem);
}
