#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenate two stringstream
 *
 * @dest: the string to be appended to
 * @src: the string to be appended
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr;
	char *src_ptr;
	int i = 0;
	int j = 0;

	dest_ptr = dest;
	src_ptr = src;

	while (dest[i] != '\0')
	{
		++dest_ptr;
		i++;
	}

	while (src[j] != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		j++;
	}

	return (dest);
}
