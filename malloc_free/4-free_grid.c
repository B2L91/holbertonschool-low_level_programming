#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
* @grid: name of the variable that stores the pointer to the dimensional grid
* @height: height of the dimensionnal grid
* Return: 0
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
