#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - function that frees a 2D grid
 * @grid: address of 2d array
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free (grid[i]);
		i++;
	}
	free (grid);
}
