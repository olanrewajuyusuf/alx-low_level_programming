#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int coin, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coin = 0;
	coin += cents / 25;
	cents %= 25;
	coin += cents / 10;
	cents %= 10;
	coin += cents / 5;
	cents %= 5;
	coin += cents / 2;
	cents %= 2;
	coin += cents;

	printf("%d\n", coin);
	return (0);
}
