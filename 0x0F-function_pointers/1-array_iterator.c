#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: size of elem to print
 * @action: pointer function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
