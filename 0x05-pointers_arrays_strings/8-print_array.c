#include <stdio.h>
#include "main.h"

/**
 * print_array - print a certain number of elements from an array
 *
 * @a: array to be printed
 * @n: number of elements to be printed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}


	while (i < n)
	{
		printf("%d", a[i]);
		i++;

		if (i != n)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}
