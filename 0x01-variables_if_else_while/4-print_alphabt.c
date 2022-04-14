#include <stdio.h>

/**
 * main - print alphabets except 'e' and 'q'
 *
 * Return: 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (alpha[i] == 'e' || alpha[i] == 'q')
		{
			i++;
			continue;
		}
		else
		{
			putchar(alpha[i]);
			i++;
		}
	}
	putchar('\n');

	return (0);
}
