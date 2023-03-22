#include "main.h"

/**
 * print_sign - Prints sign of the char
 *
 * @n: char to check
 *
 * Return: 0 if zero, 1 if greater and -1 if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
