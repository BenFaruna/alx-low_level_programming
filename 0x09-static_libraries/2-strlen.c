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
