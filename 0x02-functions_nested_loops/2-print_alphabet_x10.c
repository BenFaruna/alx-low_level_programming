#include <unistd.h>

/**
 * print_alphabet_x10 - print letters of the alphabet a-z 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		int i = 0;
		char ch[] = "abcdefghijklmnopqrstuvwxyz";

		while (i < 26)
		{
			write(1, &ch[i], 1);
			i++;
		}
		write(1, "\n", 1);

		count++;
	}
}
