#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the nunber of arguments sent to the program
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", (argc - 1));

	exit(EXIT_SUCCESS);
}
