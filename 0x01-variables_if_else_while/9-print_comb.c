#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			k = i * 10 + j;
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			if (k != 89)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
