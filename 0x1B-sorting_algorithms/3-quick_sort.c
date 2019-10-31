#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps two elem
 * @a: 1st elem
 * @b: 2nd elem
 * Return: void
 */

void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * quick_sort_helper - helper func
 * @array: pointer to array
 * @size: size of array
 * @left: left index of array
 * @right: right index of array
 * Return: void
 */

void quick_sort_helper(int *array, size_t size, int left, int right)
{
	int p;

	if (left < right)
	{
		p = partition(array, size, left, right);
		quick_sort_helper(array, size, left, p - 1);
		quick_sort_helper(array, size, p + 1, right);
	}
}

/**
 * partition - partitions array and swaps elements
 * @array: array
 * @size: size of array
 * @left: left index of array
 * @right: right index of array
 * Return: index of partition
 */

int partition(int *array, size_t size, int left, int right)
{
	int i, j;
	int pivot = array[right];

	i = left - 1;

	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
		}
	}
	i++;
	if (i != j && array[i] != array[j])
	{
		swap(&array[right], &array[i]);
		print_array(array, size);
	}
	return (i);
}

/**
 * quick_sort - sorts using quick sort algorithm and partition
 * @array: array
 * @size: size of array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_helper(array, size, 0, size - 1);
}
