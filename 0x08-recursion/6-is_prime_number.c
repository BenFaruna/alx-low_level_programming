#include "main.h"

/**
 * is_prime - helper function to find prime number
 *
 * @n: number to be checked
 * @divisor: used for the checking
 *
 * Return: 1 or 0
 */
int is_prime(int n, int divisor)
{
	if (divisor > (n / 2))
	{
		return (1);
	}
	if (n % divisor ==  0)
	{
		return (0);
	}

	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - shows whether a number is a prime number
 *
 * @n: number to be checked
 *
 * Return: 1 if number is prime and 0 if number is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (is_prime(n, 2));
}
