#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 1000)
	{
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;

		if (a != b && a != c && b != c && a < b && b < c)
		{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');
			if (i < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
		if (i % 10 == 0)
		{
			i += 90 - (i / 10);
		}
		else if (i % 100 == 0)
		{
			i += 900 - i;
		}
	}
	putchar('\n');
	return (0);
}
