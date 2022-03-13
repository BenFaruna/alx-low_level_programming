#include <stdio.h>
/**
 * main - prints the letters of the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrst";
	int i = 0;

	while (i < 26)
	{
		putchar(alphabet[i]);
		i++;
	}

	return (0);
}
