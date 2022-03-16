#include <unistd.h>
/**
 * main - prints '_putchar'
 *
 * Return: 0
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;
	while (i < 8)
	{
		write(1, &ch[i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);
}
