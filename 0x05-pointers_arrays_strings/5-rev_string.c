#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string using a pointer_safety
 *
 * @s: the string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int l;
	char *begin_ptr;
	char *end_ptr;
	char ch;

	l = strlen(s);

	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < l - 1; i++)
		end_ptr++;

	for (i = 0; i < l / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}
