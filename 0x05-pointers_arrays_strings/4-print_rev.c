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
 * print_rev - prints the reverse of the param
 *
 * @s: the parameter to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');

}
