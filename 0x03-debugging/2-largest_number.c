#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a > c)
		{
			largest = a;
		}
		else if (a < c)
		{
			largest = c;
		}
	}

	if (b > c)
	{
		if (b > a)
		{
			largest = b;
		}
		else if (b < a)
		{
			largest = a;
		}
	}

	if (c > a)
	{
		if (c > b)
		{
			largest = c;
		}
		else if (c < b)
		{
			largest = b;
		}
	}

	else
	{
		if ((a > b && c > a) || (b > a && c > b))
		{
			largest = c;
		}
		else if ((a > c && b > a) || (c > a && b > c))
		{
			largest = b;
		}
		else if ((b > c && a > b) || (c > b && a > c))
		{
			largest = a;
		}
	}

	return (largest);
}
