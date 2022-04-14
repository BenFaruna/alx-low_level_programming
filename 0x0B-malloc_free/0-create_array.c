#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes an array populated by a single character
 *
 * @size: the size of the array to be created
 * @c: the character to populate the array
 *
 * Return: a pointer to the array or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *char_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	char_array = malloc(sizeof(char) * size);

	if (char_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		char_array[i] = c;

	return (char_array);
}
