#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid previously created by
 *the alloc_grid function
 *@grid: the greed to be freed
 *@height: the height of the grid
 *
 *Description: This function free a 2 dimensional grid previously
 *created by the alloc_grid function
 *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
