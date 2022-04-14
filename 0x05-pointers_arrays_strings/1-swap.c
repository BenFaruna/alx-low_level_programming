#include "main.h"

/**
 * swap_int - change the value of two parameters between themselves
 *
 * @a: the first param
 * @b: the second param
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
