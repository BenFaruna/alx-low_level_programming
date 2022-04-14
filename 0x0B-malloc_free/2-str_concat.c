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
 * str_concat - add the contents of two strings together
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to memory space containing the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int total_len = len1 + len2;

	char *new_str = malloc(sizeof(char) * total_len);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
		new_str[i] = s1[i];

	for (i = 0; i <= len2; i++)
		new_str[(len1 + i)] = s2[i];

	new_str[(len1 + i)] = '\0';

	return (new_str);

}
