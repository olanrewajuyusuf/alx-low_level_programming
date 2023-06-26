#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument array
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *conc_arg;
	int i;
	unsigned long int len, line;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	conc_arg = malloc((len + 1) * (sizeof(char)));
	if (conc_arg == NULL)
		return (NULL);

	line = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(conc_arg + line, av[i]);
		line += strlen(av[i]);
		conc_arg[line++] = '\n';
	}
	conc_arg[len] = '\0';
	return (conc_arg);
}
