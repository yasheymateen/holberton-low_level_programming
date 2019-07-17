#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of ints
 * @width: # of columns
 * @height: # of rows
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;
	i = 0;
	j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	return (arr);
}
