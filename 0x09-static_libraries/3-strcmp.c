#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer being the ASCII difference the first dissimilar letters
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;
	int len = strlen(s1);

	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
	}
	result = 0;
	return (result);
}
