#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		if (i / 10 < i % 10)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
		if (i % 10 == 0)
		{
			i += 10 - (i / 10);
		}
	}
	putchar('\n');
	return (0);
}
