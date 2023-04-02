#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: Pointer a,
 * @b: Pointer b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
