int _putchar(char c);

/**
 * print_num - decides how numbers should be printed
 *
 * @num: number to be printed
 *
 * Return: void
 */
void print_num(int num)
{
	if (num > 99)
	{
		_putchar((num / 100) + '0');
		_putchar((num / 10) % 10 + '0');
		_putchar((num % 100) % 10 + '0');
	}
	else if (num > 9)
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		_putchar(num + '0');
	}
}


/**
 * print_to_98 - prints from a number forward or backward to 98
 *
 * @num: the starting pointer_safety
 *
 * Return: void
 */
void print_to_98(int num)
{
	int i;
	int temp;

	if (num < 99)
	{
		for (i = num; i < 99; i++)
		{
			temp = i;
			if (i < 0)
			{
				_putchar('-');
				temp = temp * -1;
			}
			print_num(temp);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = num; i > 97; i--)
		{
			print_num(i);

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
