#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 *
 * Return: 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}
	putchar('\n');

	return (0);
}
