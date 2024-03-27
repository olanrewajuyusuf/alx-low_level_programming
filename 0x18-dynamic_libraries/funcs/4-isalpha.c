#include <ctype.h>

/**
 * _isalpha - checks c in lower or upper case
 *
 * @c: The char to be checked
 *
 * Return: 1 else 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
