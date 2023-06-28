#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to copy
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, s1_len, s2_len, conc_len;

	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;

	s2_len = 0;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;
	conc_len = s1_len + n;
	concat = malloc((conc_len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[conc_len] = '\0';
	return (concat);

}
