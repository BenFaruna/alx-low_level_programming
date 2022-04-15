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
 * string_nconcat - add the contents of two strings together 
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters to be added from s2
 *
 * Return: pointer to memory space containing the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int total_len;
	char *new_str;

	if (n > len2)
		total_len = len1 + len2;
	else
		total_len = len1 + n;

	new_str = malloc(sizeof(char) * (total_len + 1));

	if (new_str == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	for (i = 0; i <= len1; i++)
		new_str[i] = s1[i];

	for (i = 0; i < n; i++)
	{
		if (i == len2)
			break;

		new_str[(len1 + i)] = s2[i];
	}

	new_str[(len1 + i)] = '\0';

	return (new_str);
}

