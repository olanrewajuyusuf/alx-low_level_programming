#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: integer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *_malloc;

	_malloc = malloc(b);
	if (_malloc == 0)
		exit(98);
	return (_malloc);
}
