#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: array of strings
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *c;

		for (c = argv[i]; *c != '\0'; c++)
		{
		if (!isdigit(*c))
		{
		printf("Error\n");
		return (1);
		}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
