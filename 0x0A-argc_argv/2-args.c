#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the argument sent to the program
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argv, char **argc)
{
	int i;

	for (i = 0; i < argv; i++)
	{
		printf("%s\n", argc[i]);
	}

	exit(EXIT_SUCCESS);
}
