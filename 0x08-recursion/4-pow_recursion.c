#include <math.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first int
 * @y: second int
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	if (y <= 1)
		return (1);
	res = pow(x, y);
	return (res);
}
