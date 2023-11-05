#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2d array of integers
 * @width: array no of rows
 * @height: array no of columns
 *
 * Return: 0 on success
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);

		for (j = 0; j < height; j++)
		{
			*grid[i] = 0;
		}
	}
	return (grid);
}
