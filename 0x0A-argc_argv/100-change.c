#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: No of command line args
 * @argv: array
 *
 * Description: calculate minimum number of coins
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprint(stderr, "Error\n");
		return (1);
	}

	int cents;

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	int coins;
	int i;

	coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	printf("%d\n", coins);
	return (0);
}
