#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that allocates space to a grid,makes and frees space
* @grid: the 2D array to be freed
* @height: the number of rows of the 2D array
* Return: free grid
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
