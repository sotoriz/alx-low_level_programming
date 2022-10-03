#include "main.h"

/**
 * free_grid -> removing memory allocation
 * @grid: grid to be freed
 * @height: height of matrix
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
