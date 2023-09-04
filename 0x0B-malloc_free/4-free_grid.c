#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 *
 * This function takes a 2D grid of integers, previously created by alloc_grid,
 * and deallocates the memory used by both the grid and its rows.
 *
 * @grid: Pointer to the 2D grid array.
 * @height: The height or number of rows in the grid.
 * Author: amir-ee
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);

}
