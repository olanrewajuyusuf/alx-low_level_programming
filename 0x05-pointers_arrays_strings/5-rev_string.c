#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, ind = 0;
	char tmp;

	while (s[ind++])
	len++;

	for (ind = len -1; ind >= len / 2; ind--)
	{
		tmp = s[ind];
		s[ind] = s[len - ind - 1];
		s[len - ind - 1] = tmp;
	}
}
