#include <stdio.h>
#include <string.h>

/**
 * main - prints its name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: Success
 */
int main(int argc, char *argv[])
{
	(void)argc;
	char *programName;
	char *slash;

	programName = argv[0];
	slash = strrchr(programName, '/');
	if (slash != NULL)
	{
		programName = slash + 1;
	}

	printf("%s\n", programName);
	return (0);
}
