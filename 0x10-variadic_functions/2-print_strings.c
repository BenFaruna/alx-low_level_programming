#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the strings in the variadic parameter
 *
 * @seperator: printed in between strings
 * @n: the number of variadic parameters
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	vprintf(seperator, ap);
	va_end(ap);

	for (i = 0; i < n; i++)
	{
		printf("%s", vprintf)
	}
}
