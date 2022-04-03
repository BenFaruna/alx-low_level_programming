#include <stddef.h>
/**
 * _strchr - checks for first occurrence of letter in a string
 *
 * @char: string to be checked
 * @c: characted to be checked for
 *
 * Return: pointer to first occurrence of 'c' in 's' or NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s++; i++)
	{
		if (*s == c)
		{
			return s;
		}
	}
	return NULL;
}
