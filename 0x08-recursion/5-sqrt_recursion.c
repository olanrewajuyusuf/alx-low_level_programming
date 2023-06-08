#include "main.h"

int act_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - check the natural square root of a number
 * @n: num to calculate
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (act_sqrt_recursion(n, 0));
}

/**
 * act_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: num to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int act_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (act_sqrt_recursion(n, i + 1));
}
