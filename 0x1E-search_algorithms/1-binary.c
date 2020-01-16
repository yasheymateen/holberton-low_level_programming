#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to 1st element to print
 * @size: size of the array to print
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value
 * Return: index where value is located, or -1 if array is NULL
 * or value not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array + left, right - left + 1);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (value);
		else if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
	}
	return (-1);
}
