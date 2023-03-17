#include <stdio.h>

/**
 * main - Entry point
 *
 * variable i is to use as a counter in loop
 * for loop, loops through the ASCII code
 * putchar(i) prints each chars in the ASCII code loop
 * putchar(\n) prints a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
