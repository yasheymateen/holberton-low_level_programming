#include "sort.h"


/**
 * is_sort - checks if array is sorted
 * @array: array
 * @size: length of array
 * Return: 1 if true, 0 otherwise
 */

int is_sort(int *array, size_t size)
{
	unsigned int i;

	for (i = 0; array && i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
			return (0);
	}
	return (1);
}
/**
 * swap - swaps two int
 * @a: pointer to 1st elem
 * @b: pointer to 2nd elem
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - sort using bubble sort algorithm
 * @array: array
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
