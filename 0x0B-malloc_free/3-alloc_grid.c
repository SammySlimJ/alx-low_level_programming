#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 *
 * Description: This function allocates memory for a 2D array of integers,
 * initializes each element to 0, and returns a pointer to the array.
 * Return: A pointer to the 2D array, or
 *NULL on failure or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < 1; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
