#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints the reverse of a an array
 *
 * @a: the array to be reversed
 * @n: the size of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int arr[15];

	while (i < n)
	{
		arr[i] = a[i];
		i++;
	}

	for (i = 0; i <= n; i++)
	{
		*(a + i) = arr[(n - 1) - i];
	}
}
