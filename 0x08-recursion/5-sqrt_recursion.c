#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: the number
 *
 * Return: the square root of 'n'
 */
int _sqrt_recursion(int n)
{
	int pow = 1;

	if (n == 1)
		return (1);

	if (pow > n/2)
		return (-1);

	if ((pow * pow) != n)
	{
		pow++;
		return _sqrt_recursion(n);
	}

	return (pow);
}
