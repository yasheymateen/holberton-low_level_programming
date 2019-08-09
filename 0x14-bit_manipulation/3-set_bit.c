#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 for success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	if (!n)
		return (-1);
	return (1);
}
