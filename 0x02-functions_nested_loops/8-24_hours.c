int _putchar(char c);
/**
 * jack_bauer - prints the 24 hour clock by minutes
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{

			if (i > 9) /* decision for first hour number */
			{
				_putchar(i / 10 + '0');
			}
			else
			{
				_putchar('0');
			}

			_putchar(i % 10 + '0'); /* second hour number */
			_putchar(':');

			if (j > 9) /* decision for first minute number */
			{
				_putchar(j / 10 + '0');
			}
			else
			{
				_putchar('0');
			}
			_putchar(j % 10 + '0'); /* second minute number */
			_putchar('\n');
		}
	}
}
