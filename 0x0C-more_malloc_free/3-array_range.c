#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers within a range
 * @min: the minimum number in the array
 * @max: the maximum number in the array
 *
 * Return: pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;
	int fill;

	size = (max - min + 1);
	array = malloc(sizeof(int) * size);
	fill = min;

	if (array == NULL)
		return (NULL);

	if (min > max)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		array[i] = fill;
		fill++;
	}
	return (array);
}

