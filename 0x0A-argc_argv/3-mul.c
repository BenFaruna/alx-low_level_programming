#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of the arguments of the program
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("Error\n");

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));

	exit(EXIT_SUCCESS);
}
