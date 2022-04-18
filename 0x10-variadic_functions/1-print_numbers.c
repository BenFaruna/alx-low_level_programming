#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers in the variadic parameter
 *
 * @seperator: printed in between numbers
 * @n: the number of variadic parameters
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		if ((i != 0) && (i < n))
		{
			if (seperator != NULL)
				printf("%s", seperator);
		}
		printf("%d", va_arg(ap, int));
	}

	va_end(ap);
}
