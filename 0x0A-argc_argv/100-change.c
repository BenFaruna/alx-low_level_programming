#include <stdio.h>
#include <stdlib.h>

/**
 * coin_remaining - gets the number of coins needed for change
 *
 * @coin: the amount
 * @count: the number of coins
 *
 * Return: the number of coins
 */
int coin_remaining(int coin, int count)
{
	if (coin == 0)
		return (count);

	if (coin >= 25)
		return (coin_remaining(coin - 25, count + 1));
	else if (coin >= 10)
		return (coin_remaining(coin - 10, count + 1));
	else if (coin >= 5)
		return (coin_remaining(coin - 5, count + 1));
	else if (coin >= 2)
		return (coin_remaining(coin - 2, count + 1));
	else if (coin >= 1)
		return (coin_remaining(coin - 1, count + 1));

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

	coin = atoi(argv[1]);

	if (argc == 1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	result = coin_remaining(coin, 0);

	printf("%d\n", result);

	exit(EXIT_SUCCESS);


}
