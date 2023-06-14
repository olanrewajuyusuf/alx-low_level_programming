#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: string to duplicate
 *  Return: NULL or duplicated string
 */
char *_strdup(char *str)
{
	char *dup_arr;
	int len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	dup_arr = malloc(sizeof(char) * len - 1);
	if (dup_arr == NULL)
		return (NULL);
	dup_arr = strdup(str);
	return (dup_arr);
}
