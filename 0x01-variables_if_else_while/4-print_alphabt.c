#include <stdio.h>

/**
 * main - Entry point
 *
 * variable i is to use as a counter in loop
 *
 * for loop, loops through the ASCII code
 *
 * if statement checks if letters are q and he then
 * remove them
 *
 * putchar(i) prints each chars except q and e
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
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
