#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc > 1)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
			if (isdigit(argv[i][j]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
			}
		}
	}
	printf("0\n");
	return (0);
}
