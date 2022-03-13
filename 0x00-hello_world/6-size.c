#include <stdio.h>

/**
 * main - Main function printing out the values of various data types
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %ld bytes(s)", sizeof(char));
	printf("Size of an int: %ld bytes(s)", sizeof(int));
	printf("Size of a long int: %ld bytes(s)", sizeof(long));
	printf("Size of a long long int: %ld bytes(s)", sizeof(unsigned long));
	printf("Size of a float: %ld bytes(s)", sizeof(float));
	
	return (0);
}
