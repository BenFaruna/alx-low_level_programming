#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print a square from a parameter
 *
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int temp;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	temp = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= (size - temp))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		temp++;
		_putchar('\n');
	}
}
