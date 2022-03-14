#include <stdio.h>

/**
 * main - prints alphabets small and caps
 *
 * Return: 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alpha[i]);
		i++;
	}

	return (0);
}
