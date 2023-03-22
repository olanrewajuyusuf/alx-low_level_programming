#include <ctype.h>

/**
 * _islower - Checks if c is lowercase or not
 *
 * @c: character to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
