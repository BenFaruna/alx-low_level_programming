#include <stdio.h>
#include <stdlib.h>

/**
 * coin_remaining - gets the number of coins needed for change
 *
 * @coin: the amount
 *
 * Return: the number of coins
 */
int coin_remaining(int coin)
{
	int count = 0;

	if (coin < 0)
		return (0);

	while (coin != 0)
	{
		if (coin >= 25)
			coin = coin - 25;
		else if (coin >= 10)
			coin = coin - 10;
		else if (coin >= 5)
			coin = coin - 5;
		else if (coin >= 2)
			coin = coin - 2;
		else if (coin >= 1)
			coin = coin - 1;

		count++;
	}

	return (count);
}

/**
 * main - prints the number of coins needed to change a number
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int coin;
	int result;


	if (argc == 1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	coin = atoi(argv[1]);

	result = coin_remaining(coin);

	printf("%d\n", result);

	exit(EXIT_SUCCESS);


}
