#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the diagonal of a 2d array
 *
 * @a:2d array
 * @size: array dimension
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum;
	unsigned int sum2;

	sum = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
		sum = sum + a[i];
		sum2 = sum2 + a[i];
	}

	printf("%u, %u\n", sum, sum2);
}
