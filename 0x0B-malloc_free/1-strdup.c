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
	int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	dup_arr = (char *)malloc(sizeof(char) * (len + 1));
	if (dup_arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dup_arr[i] = str[i];
	dup_arr[len] = '\0';
	return (dup_arr);
}
