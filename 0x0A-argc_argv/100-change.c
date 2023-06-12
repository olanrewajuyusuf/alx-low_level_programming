#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on Success and 1 on fail
 */
int main(int argc, char *argv[])
{
	int cent, i, minCoins;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		cent = atoi(argv[1]);
		minCoins = 0;

		if (cent < 0)
			printf("0\n");
		else
		{
		for (i = 0; i < 5; i++)
		{
			minCoins += cent / coin[i];
			cent %= coin[i];
		}
		printf("%d\n", minCoins);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
