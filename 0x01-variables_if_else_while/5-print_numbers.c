#include <stdio.h>

/**
 * main - Entry point
 *
 * Counter set to start from 0
 *
 * while loop loops through num 10
 *
 * printf func prints each digits in base 10 starting from 0
 *
 * i++ exits the loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
