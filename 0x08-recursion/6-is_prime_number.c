#include "main.h"

int act_prime(int n, int i);

/**
 * is_prime_number - reads if num is a prime number or not
 * @n: number to read
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (act_prime(n, n - 1));
}

/**
 * act_prime - calcs actual prime number
 * @n: number to calculate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int act_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
