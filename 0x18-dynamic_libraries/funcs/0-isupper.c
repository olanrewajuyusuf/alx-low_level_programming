#include <ctype.h>

/**
 * _isupper - checks if char c is uppercase
 *
 * @c: int to check
 *
 * Return: 1 if its upper and 0 if its not
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
