#include "main.h"

/**
 * _isdigit - check if a char is a number
 *
 * @c: the char to be checked
 *
 * Return: 1 for True and 0 for false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
