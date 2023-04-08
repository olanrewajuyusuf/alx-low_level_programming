#include <stdio.h>

/**
 * main: Prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
		sum += i;
	printf("%d\n", sum);
	return (0);
}
