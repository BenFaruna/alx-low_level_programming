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
		if (ch != '9')
		{
			putchar(ch);
			putchar(',');
			putchar(' ');
			ch++;
		}
		else
		{
			putchar(ch);
			putchar('\n');
			ch++;
		}
	}

	return (0);

}
