#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to be returned
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *mem;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	mem = malloc(sizeof(char) * (i + 1));

	if (mem == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		mem[j] = str[j];
	return (mem);
}
