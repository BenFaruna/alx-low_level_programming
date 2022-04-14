#include <stdio.h>

/**
 * main - Main function printing out the values of various data types
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)%c", sizeof(char), '\n');
	printf("Size of an int: %ld byte(s)%c", sizeof(int), '\n');
	printf("Size of a long int: %ld byte(s)%c", sizeof(unsigned long), '\n');
	printf("Size of a long long int: %ld byte(s)%c", sizeof(long long), '\n');
	printf("Size of a float: %ld byte(s)%c", sizeof(float), '\n');

	return (0);
}
