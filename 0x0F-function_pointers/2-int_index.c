#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for integers in an array
 *
 * @array: the array to search
 * @size: the size of the array
 * @cmp: function pointer used for comparison
 *
 * Return: the index of the integer in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
