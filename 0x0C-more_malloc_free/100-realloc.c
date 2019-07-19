#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - function that reallocates memory block
 * @ptr: pointer to old block of memory
 * @old_size: size of old memory block
 * @new_size: size of new block of memory
 * Return: pointer to new block of memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *arr, *nptr;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	nptr = ptr;
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		return (arr);
	}
	for (i = 0; i < old_size && i < new_size; i++)
		arr[i] = nptr[i];
	arr = (void *) arr;
	free(ptr);
	return (arr);
}
