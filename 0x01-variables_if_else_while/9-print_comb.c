#include <stdio.h>
/**
 * main - print combination of single digit
 *
 * Return: 0
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');

	return (0);

}
