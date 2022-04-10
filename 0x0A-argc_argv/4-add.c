#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the name of the program
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int result = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < 1 || isalnum(argv[i])))
			{
				printf("Error\n");

				exit(EXIT_FAILURE);
			}

			result = result + atoi(argv[i]);
		}
	}

	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
