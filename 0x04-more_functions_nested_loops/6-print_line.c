#include "main.h"

/**
 * print_line - print line by parameter
 *
 * @n: the length of the linear_congruential
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
