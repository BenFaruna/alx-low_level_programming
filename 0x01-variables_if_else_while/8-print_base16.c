#include <stdio.h>
/**
 * main - prints hexadecimal characters
 *
 * Return: 0
 */
int main(void)
{
	char hex[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
