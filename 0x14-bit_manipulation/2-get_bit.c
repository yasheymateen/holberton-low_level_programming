#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - finds value of a bit at a given index
 * @n: number
 * @index: index
 * Return: 1 for success, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (index > 63)
		return (-1);
	if (n == 0)
		return (0);
	if (n)
	{
		n = n % 2;
		return (n);
	}
	else
		return (-1);
}
