#include "main.h"

/**
 * puts2 - prints every other character
 *
 * @str: string to be printed
 *
 *Return: Nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (i > -1)
	{
		if (str[i] == '\0')
		{
			break;
		}
		else if (i % 2 != 0)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
