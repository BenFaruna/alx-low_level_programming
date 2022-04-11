#include "main.h"

/**
 * _isupper - check if a char is an uppercase letter
 *
 * @c: the char to be checked
 *
 * Return: 1 for True and 0 for false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
