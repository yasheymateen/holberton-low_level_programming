#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes function given as parameter on each elem
 * @array: array to execute through
 * @size: size of array
 * @action: pointer to function to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
