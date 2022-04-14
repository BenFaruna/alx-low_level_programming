#include "main.h"

/**
 * cap_string - capitalizes the first letter of every word
 *
 * @s: the string to be checked
 *
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	char *str;
	int capitalize = 1;

	str = s;

	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 34) || (*str >= 39 && *str <= 41)
			|| *str == 44 || *str == 46 || *str == 59 || *str == 63
			|| *str == 123 || *str == 125 || *str == '\n'
			|| *str == '\t')
		{
			capitalize = 1;
		}
		else if ((*str > 96 && *str < 123) && capitalize)
		{
			*str = *str - 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}

		str++;
	}

	return (s);
}
