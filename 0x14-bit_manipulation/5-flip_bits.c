#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - returns number of bits you would need to flip
 * @n: number
 * @m: 2nd number
 * Return - number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int i;

	x = n ^ m;
	i = 0;
	while (x)
	{
		if (x & 1)
			i++;
		x = x >> 1;
	}
	return (i);
}
