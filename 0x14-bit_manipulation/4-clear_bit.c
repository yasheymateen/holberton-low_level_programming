#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - clear bits
 * @n: number
 * @index: index
 * Return: - 1 for success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
