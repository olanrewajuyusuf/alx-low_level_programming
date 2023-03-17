#include <stdio.h>

/**
 * main - Entry point
 *
 * variable i use in counter for loop
 *
 * for loop1 loops through ASCII code for lowercase
 * putchar(i) one prints each lowercase chars
 *
 * for loop2 loops through ASCII code for uppercase
 * putchar(i) two prints each uppercase chars
 *
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
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
