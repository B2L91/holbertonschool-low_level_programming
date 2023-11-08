#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: numbers of columns
 * @height: numbers of rows
 * Return: If width or height is 0 or negative, return NULL
 */



int **alloc_grid(int width, int height)
{
int i, j;
int **grid = malloc(height * sizeof(int *));

if (grid == NULL || width <= 0 || height <= 0)
{
	return (NULL);
}

for (i = 0; i < height; i++)

{
	grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{

for (j = 0; j < i; j++)

{

free(grid[j]);
}

free(grid);
	return (NULL);
}
}
	return (grid);
}
