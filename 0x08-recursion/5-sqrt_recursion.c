#include "main.h"

/**
 * _sqrt - returns the square root of a number
 *
 * @n: the number
 * @start: first number
 *
 * Return: the square root of 'n'
 */
int _sqrt(int n, int start)
{

	if (n == 1)
		return (1);

	if (start > n / 2)
		return (-1);

	if ((start * start) != n)
	{
		return (_sqrt(n, start + 1));
	}

	return (start);
}

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: the number
 *
 * Return: the square root of 'n'
 */
int _sqrt_recursion(int n)
{
	int result;

	result = _sqrt(n, 1);

	return (result);
}
