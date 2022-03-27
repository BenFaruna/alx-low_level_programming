#include "main.h"

/**
 * _strncpy - copy string into another
 *
 * @dest: the string to be copied into
 * @src: the string to be copied
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
