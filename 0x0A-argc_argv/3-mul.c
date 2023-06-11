#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: either 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 2)
	{
		sum = 1;
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
