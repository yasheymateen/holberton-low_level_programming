#include "sort.h"
/**
 * swap - swap two int elem
 * @a: 1st element
 * @b: 2nd element
 * Return: void
 */

void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array in ascending order
 * @array: array
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t sorted, i, t_swap;
	int small;

	if (!array || size < 2)
		return;

	sorted = 0;
	while (sorted < size - 1)
	{
		i = t_swap = sorted;
		small = array[i++];
		while (i < size)
		{
			if (array[i] < small)
			{
				small = array[i];
				t_swap = i;
			}
			i++;
		}
		if (sorted != t_swap)
		{
			swap(&array[sorted], &array[t_swap]);
			print_array(array, size);
		}
		sorted++;
	}
}
