#include "main.h"
/**
 * free_grid - frees a 2D grid that was previously created by alloc_grid
 * @grid: pointer to 2D grid
 * @height: number of rows
 * Return: frees memory
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
