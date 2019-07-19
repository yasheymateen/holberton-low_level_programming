#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - array of nums
 * @min: 1st number
 * @max: last number
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, *n;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	n = arr;
	while (min <= max)
	{
		*n = min;
		n++;
		min++;
	}
	return (arr);
}
