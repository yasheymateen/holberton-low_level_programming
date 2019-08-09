#include <stdio.h>

/**
 * get_endianness - checks endianness
 * Return: 1 for little endian, 0 for big endian
 */
int get_endianness(void)
{
	int i;
	char *a;

	i = 1;
	a = (char *)&i;
	return ((int)a[0]);
}
