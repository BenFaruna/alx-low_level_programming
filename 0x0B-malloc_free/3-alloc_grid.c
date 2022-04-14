#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array in memory
 *
 * @width: the number of columns on the array
 * @height: the number of rows of the array
 *
 * Return: pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int *grid = malloc(sizeof(int) * (width * height));
	int **array[];

	if (grid == NULL)
		return (NULL);

	while (i < (width * height))
	{
		grid[i] = 0;
		i++;
	}

	return (array);
}
