#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints string using function pointer
 *
 * @name: the string to be printed
 * @f: function pointer used for printing the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
