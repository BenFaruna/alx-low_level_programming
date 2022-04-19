#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the strings in the variadic parameter
 *
 * @separator: printed in between strings
 * @n: the number of variadic parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c = n;
	va_list ap;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	while (c--)
	{
		s = va_arg(ap, char *);
		printf("%s", s ? s : "(nil)");
		if (c != 0)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
