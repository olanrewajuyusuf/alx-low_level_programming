#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to change
 * Return: str
 */
char *string_toupper(char *str)
{
	int ind = 0;

	while (str[ind])
	{
	if (str[ind] >= 'a' && str[ind] <= 'z')
	str[ind] -= 32;
	ind++;
	}
	return (str);
}
