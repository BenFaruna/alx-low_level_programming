#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 *  @s: string to be checked
 *  Return: length of str
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
		else
		{
			_putchar(str[i]);
		}
		i = i + 2;
	}
	_putchar('\n');
}
