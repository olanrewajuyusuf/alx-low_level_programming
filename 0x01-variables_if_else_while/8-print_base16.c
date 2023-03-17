#include <stdio.h>

/**
 * main - Entry point
 *
 * Counter starting from 0
 *
 * for loop loops through base 16
 *
 * if statement checks if the i less than 10 or not
 *
 * putchar prints i chars
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
