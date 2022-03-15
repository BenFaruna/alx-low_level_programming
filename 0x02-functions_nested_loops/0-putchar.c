#include "_putchar.c"
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
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
