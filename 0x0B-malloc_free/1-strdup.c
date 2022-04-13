#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the string to be duplicated;
 *
 * Return: a pointer to a memory space or NULL if str is NULL
 */
char *_strdup(char *str)
{
	unsigned int i;
	long unsigned int len = sizeof(str);
	char *str_ptr = str;
	char *str_cpy = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
	{
		str_cpy[i] = *(str_ptr + i);
	}

	return (str_cpy);
}
