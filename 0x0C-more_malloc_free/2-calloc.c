#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - function that allocates memory for an arr using malloc
 * @nmemb: # of elements to allocate memory for
 * @size: size of array
 * Return: array that is mallocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * (nmemb * size));

	if (arr == NULL)
		return (NULL);
	arr = (char *) arr;

	for (n = 0; n < (nmemb * size); n++)
		arr[n] = 0;
	arr = (void *) arr;
	return (arr);
}
