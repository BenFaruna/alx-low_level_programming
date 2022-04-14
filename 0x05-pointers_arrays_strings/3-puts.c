#include "main.h"

/**
 * _puts - prints param to stdout
 *
 * @str: string to be printed
 *
 *Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (i > -1)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
