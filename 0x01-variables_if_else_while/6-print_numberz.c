#include <stdio.h>
/**
 * main - prints digit from base 10
 *
 * Return: 0
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
