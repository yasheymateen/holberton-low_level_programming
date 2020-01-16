#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: 1st index where value is located. If value is not present in
 * array or if array is NULL, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int i, jump = sqrt(size);

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < (int)size && value > array[i]; i += jump)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%d] and [%d]\n"
	       , i - jump, i);
	if (i != 0)
		i -= jump;

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		else if (value < array[i])
			return (-1);
		i++;
	}
	return (-1);
}
