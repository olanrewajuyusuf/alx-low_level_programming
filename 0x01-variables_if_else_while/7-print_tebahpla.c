#include <stdio.h>

/**
 * main - Entry point
 *
 * Counter set to start from ASCII 'z'
 *
 * while loop loops through ASCII lowercase letters
 *
 * putchar func prints each chars to 'a' starting from 'z'
 *
 * i-- exits the loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
