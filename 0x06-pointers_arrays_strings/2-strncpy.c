#include "main.h"
#include <stddef.h>

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

	if (dest == NULL)
	{
		return NULL;
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
