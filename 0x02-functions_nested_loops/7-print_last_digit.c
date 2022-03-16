int _putchar(char c);

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to be checked
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int result;
	int temp;

	if (n > 99)
	{
		_putchar((num / 10) % 10 + '0');
		_putchar((num % 100) % 10 + '0');
	}
	else if (n >= 0)
	{
		result = n % 10;
		temp = result + '0';
	}
	else
	{
		n = -1 * n;
		result = n % 10;
		temp = result + '0';
	}
	_putchar(temp);

	return (result);
}
