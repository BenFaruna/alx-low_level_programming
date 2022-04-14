#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * palindrome_checker - helper function for is_palindrome
 *
 * @s: string to be checked
 * @start: beginning index of string
 * @len: length of the string
 *
 * Return: 1 or 0
 */
int palindrome_checker(char *s, int start, int len)
{
	if (start > len)
		return (1);

	if (*(s + start) == *(s + len))
	{
		return (palindrome_checker(s, start + 1, len - 1));
	}

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if string is a palindrome and 0 if string is not a palindrome
 */
int is_palindrome(char *s)
{
	char *s_ptr = s;
	int len = strlen(s) - 1;

	if (*s_ptr != *(s_ptr + len))
	{
		return (0);
	}

	return (palindrome_checker(s_ptr, 0, len));
}
