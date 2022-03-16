#include <unistd.h>
#include <stdio.h>
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
		write(1, (num / 10) % 10 + '0', 1);
		write(1, (num % 100) % 10 + '0', 1);
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
	write(1, &temp, 1);

	return (result);
}
