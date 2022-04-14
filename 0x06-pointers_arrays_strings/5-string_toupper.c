#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase in a string
 *
 * @str: the string to be checked
 *
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str < 123 && *str > 96)
		{
			*str = *str - 32;
		}

		str++;
	}

	return (str);
}
