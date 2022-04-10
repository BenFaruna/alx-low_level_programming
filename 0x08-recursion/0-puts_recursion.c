#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: string to be printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	char *s_ptr = s;

	if (*s_ptr == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s_ptr++);
	_puts_recursion(s_ptr);
}
