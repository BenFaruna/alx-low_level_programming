#include <stdio.h>

/**
 * main - prints base 10 characters
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');

	return (0);
}
