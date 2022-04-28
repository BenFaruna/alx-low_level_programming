#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * binary_to_int - converts a binary string into base 10
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
			conversion[index] = (b[index] - '0') * \
			pow(2, (len - index - 1));
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
