#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: grid height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid_ptr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid_ptr = malloc(height * (sizeof(int *)));
	if (grid_ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid_ptr[i] = malloc(width * sizeof(int));
		if (grid_ptr[i] == NULL)
		{
			return (NULL);
		}
	}
	return (grid_ptr);
}
