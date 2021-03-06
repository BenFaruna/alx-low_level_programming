#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate two strings by a certain number
 *
 * @dest: the string to be appended to
 * @src: the string to be appended
 * @n: the number of bytes to be appended
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	char *dest_ptr = dest + strlen(dest);

	while (*src != '\0' && count != n)
	{
		*dest_ptr++ = *src++;
		count++;
	}

	*dest_ptr = '\0';

	return (dest);
}
