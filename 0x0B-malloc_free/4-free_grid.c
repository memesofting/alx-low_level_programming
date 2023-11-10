#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2d grid(alloc_grid)
 * @grid: 2d grid to be freed
 * @height: no of culumns of grid
 *
 * Return: void on success
 */

void free_grid(int **grid, int height)
{
	free(grid);
	return;
}
