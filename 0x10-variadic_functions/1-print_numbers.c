#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers in the variadic parameter
 *
 * @separator: printed in between numbers
 * @n: the number of variadic parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		if ((i != 0) && (i < n))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
	}
	printf("\n");

	va_end(ap);
}
