#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string from first param to the other
 *
 * @dest: the param to be copied to
 * @src: the param to be copied from
 *
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (src);
}
