#include <stdio.h>

/**
 * main - Print output to stderr
 *
 * Return: 1
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%-59s", msg);

	return (1);
}
