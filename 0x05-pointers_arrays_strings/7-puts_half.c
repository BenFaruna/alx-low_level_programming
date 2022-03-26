#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: string to be checked
 *
 * Return: length of str
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; i >= -1; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}

	return (i);
}

/**
 * puts_half - prints every other character
 *
 * @str: string to be printed by half
 *
 *Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int len;

	i = 0;
	len = _strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = ((len - 1) / 2) + 1;
	}

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
