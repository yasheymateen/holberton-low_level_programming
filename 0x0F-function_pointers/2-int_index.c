#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: function that compares values
 * Return: -1 if fails, otherwise index of value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
