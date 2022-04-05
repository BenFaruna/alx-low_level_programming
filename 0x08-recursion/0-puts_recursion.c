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
	int i;

	for (i = 0; *s++; i++)
	{
		_putchar(*s_ptr++);
	}
	_putchar('\n');
}
