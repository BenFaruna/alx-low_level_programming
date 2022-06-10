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
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i)
				free(grid[--i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			grid[i][j] = 0;
	}
	return (grid);
}
