#include <unistd.h>
/**
 * print_sign - prints the polarity of a number
 *
 * @n: the number to be checked
 *
 * Return: the polarity of a number, either +, - or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return(1);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		return(-1);
	}

	write(1, "0", 1);
	return (0);
}
