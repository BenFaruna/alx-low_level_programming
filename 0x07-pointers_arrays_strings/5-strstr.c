#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
 * _strstr - locates first occurence of byte in 'accept' in string 's'
 *
 * @haystack: string to be checked
 * @needle: substring to be found
 *
 * Return: pointer to the beginning of substring located or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr = haystack;
	char *needle_ptr = needle;
	char *result;
	unsigned int i;
	unsigned int j;
	unsigned int needle_len;

	result = NULL;
	needle_len = strlen(needle);

	for (i = 0; *haystack++; i++)
	{
		if (*(haystack_ptr + i) == *needle_ptr)
		{
			/*printf("haystack: %c, needle: %c\n", *(haystack_ptr + i), *needle_ptr);*/
			for (j = 0; j < needle_len; j++)
			{
				/* printf("BEFORE BREAK ========= haystack: %c, needle: %c\n", *(haystack_ptr + (i+j)), *(needle_ptr+j)); */
				if (*(haystack_ptr + (i + j)) != *(needle_ptr + j))
					{
						/*printf("BREAK ========= haystack: %c, needle: %c\n", *(haystack_ptr + i), *needle_ptr);*/
						break;
					}
				else if ((j == needle_len - 1) && (*(haystack_ptr + (i + j - 1)) == *(needle_ptr + (j - 1))))
					{
						result = (haystack_ptr + i);
						return (result);
					}
			}
		}
		else
		{
			continue;
		}
	}
	return result;
}
