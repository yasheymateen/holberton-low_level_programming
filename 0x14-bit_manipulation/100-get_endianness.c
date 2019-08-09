#include <stdio.h>

/**
 * get_endianness - checks endianness
 * Return: 1 for little endian, 0 for big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *a;

	a = (char *)&i;
	if (*a)
		return (1);
	else
		return (0);
}
