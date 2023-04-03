#include "main.h"
#include <stdio.h>

/**
 * _strchar - locates a character in a string.
 * @s: pointer
 * @c: character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
