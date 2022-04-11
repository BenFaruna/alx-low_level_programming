#include <string.h>
#include <stddef.h>
/**
 * _strpbrk - locates first occurence of byte in 'accept' in string 's'
 *
 * @s: string to be checked
 * @accept: bytes to be checked for
 *
 * Return: pointer to the byte in 's' or NULL if byte does not exist
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr = s;
	char *accept_ptr = accept;
	char *result;
	unsigned int accept_len;
	unsigned int i;
	unsigned int j;

	accept_len = strlen(accept);
	result = NULL;

	for (i = 0; s++; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (*(s_ptr + i) == *(accept_ptr + j))
			{
				result = (s_ptr + i);
				return (result);
			}
		}
	}

	return (result);
}
