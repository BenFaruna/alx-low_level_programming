#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * power - computes the exponetial of a number
 *
 * @a: the number
 * @b: the power
 *
 * Return: the number raised to b power
 */
unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int result = a;
	unsigned int i;

	if (b == 0)
		return (1);

	for (i = 0; i < b - 1; i++)
	{
		result = result * a;
	}

	return (result);
}

/**
 * binary_to_uint - converts a binary string into base 10
 *
 * @b: the binary string
 *
 * Return: the decimal representation of the string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index;
	unsigned int len;
	unsigned int *conversion;

	unsigned int decimal;

	if (b == NULL)
		return (0);

	index = 0;
	len = strlen(b);
	conversion = malloc(sizeof(unsigned int) * len);

	if (conversion == NULL)
		return (0);

	while (index != len)
	{

		if (b[index] == '1' || b[index] == '0')
		{
			conversion[index] = (b[index] - '0') *
			power(2, (len - index - 1));
		}
		else
			return (0);

		index++;
	}

	decimal = 0;

	for (index = 0; index < len; index++)
	{
		decimal = decimal + conversion[index];
	}

	return (decimal);
}
