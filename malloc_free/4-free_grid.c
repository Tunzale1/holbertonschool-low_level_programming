#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: 2 dimensional pattern
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	if (height < 1)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
