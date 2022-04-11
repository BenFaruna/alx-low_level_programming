#include <string.h>
/*#include <stdio.h>*/
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be checked
 * @accept: bytes that should be checked for
 *
 * Return:  number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	char *s_ptr = s;
	char *accept_ptr = accept;
	unsigned int num = 0;
	unsigned int i;
	unsigned int j;
	unsigned int len;

	len = strlen(accept);

	for (i = 0; s++; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (*(s_ptr + i) == *(accept_ptr + j))
			{
				/*printf("i: %u\n", i);*/
				/*printf("j: %u\n", j);*/
				break;
			}
		}

		if ((j == len) && (*(s_ptr + i) != *(accept_ptr + j)))
		{
			/*printf("s: %c\n", *(s_ptr+i));*/
			/*printf("accept: %c\n", *(accept_ptr+(j-1)));*/
			num = i;
			break;
		}
	}

	return (num);
}
