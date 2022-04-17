#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - function that traverse an array
 *
 * @array:array of integers
 * @size: the size of the array
 * @action: pointer to function that returns void with one integer parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
