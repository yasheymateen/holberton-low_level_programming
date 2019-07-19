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
	int *arr;
	int i, n, range;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);

	for (i = 0, n = min; n <= max; i++, n++)
		arr[i] = n;
	return (arr);
}
