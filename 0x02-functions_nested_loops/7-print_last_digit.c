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

	if (n < 0)
	{
		n = n * -1;
	}

	if (n > 100000)
	{
		n = n / 100000;
	}

	result = n % 10;

	_putchar(result + '0');

	return (result);
}
