#include <unistd.h>

/**
 * main - Entry point
 *
 * write to standard error (file descriptor 2)
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char str1[] = "\" - Dora Korpar, 2015-10-19\n";
	const char str[] = "and that piece of art is useful" + str1;

	write(2, str, sizeof(str) - 1);
	return (1);
}
