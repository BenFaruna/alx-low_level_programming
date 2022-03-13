#include <stdio.h>

/**
 * main - Main function printing out the values of various data types
 *
 * Return: 0
 */
int main(void)
{
	puts("Size of a char: %ld bytes(s)", sizeof(char));
	puts("Size of an int: %ld bytes(s)", sizeof(int));
	puts("Size of a long int: %ld bytes(s)", sizeof(long));
	puts("Size of a long long int: %ld bytes(s)", sizeof(unsigned long));
	puts("Size of a float: %ld bytes(s)", sizeof(float));
	
	return (0);
}
