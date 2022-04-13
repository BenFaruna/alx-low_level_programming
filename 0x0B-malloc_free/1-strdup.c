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
	int i;
	char *str_ptr;

	if (str == NULL)
		return (NULL);


	str_ptr = malloc((sizeof(char) * 8));

	if (str_ptr == NULL)
		return (NULL);

	for (i = 0; i > -1; i++)
	{
		if (str[i] < 65 || str[i] > 122)
			break;

		str_ptr[i] = *(str + i);
	}

	return (str_ptr);

}
