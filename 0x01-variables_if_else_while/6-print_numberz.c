#include <stdio.h>
/**
 * main - prints digit from base 10
 *
 * Return: 0
 */
int main(void)
{
	int count = 0;

	while (count <= 9)
	{
		putchar((count + '0'));
		count++;
	}
	putchar('\n');

	return (0);
}
