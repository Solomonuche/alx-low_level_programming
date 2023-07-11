#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2D array
 * @grid: array
 * @height: column
 *
 * Return: (nothing)
*/

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
