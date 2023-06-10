#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */
int main(int argc, __attribube__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
