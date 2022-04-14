#include "main.h"
#include <stdlib.h>

/**
 * _strlen - counts the number of characters in a string
 *
 * @str: the string to be counted
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

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
	unsigned int len;
	char *str_ptr;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	str_ptr = malloc(sizeof(char) * (len + 1));

	if (str_ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		str_ptr[i] = *(str + i);
	}
	str_ptr[i] = '\0';

	return (str_ptr);

}
