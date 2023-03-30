#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * leet - encodes a string into 1337.
 * @str: string to encode
 * Return: result
 */
char *leet(char *str)
{
	static const char *leet_table[]; 
	leet_table = {"", "1", "", "3", "", "4", "7", "0", "", "", "", "1", "", "", "", "0"};
	size_t len = strlen(str);
	char *result = malloc(len + 1);

	if (result == NULL)
	{
	return NULL;
	}
	for (size_t i = 0; i < len; i++)
	{
	char c = str[i];
	if (c >= 'a' && c <= 'z')
	{
	c = c - 'a';
	}
	else if (c >= 'A' && c <= 'Z')
	{
	c = c - 'A';
	}
	else
	{
	c = 10;
	}
	result[i] = leet_table[c][0];
	}
	result[len] = '\0';
	return result;
}

