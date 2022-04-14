#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: the string to be duplicated;
 *
 * Return: a pointer to a memory space or NULL if str is NULL
 */
char *_strdup(char *str)
{
	int str_size;
	char *dup;
	char *dup_offset;

	/* Allocate memory for duplicate */
	str_size = strlen(str);
	dup = malloc(sizeof(char) * (str_size + 1));
	if (dup == NULL)
		return(NULL);

	/* Copy string */
	dup_offset = dup;
	while(*str)
	{
		*dup_offset = *str;
		dup_offset++;
		str++;
	}
	*dup_offset = '\0';

	return(dup);
}
