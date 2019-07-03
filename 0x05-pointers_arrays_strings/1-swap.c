#include "holberton.h"

/**
 * swap - swaps the values of two integers
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;

*a = *b;
*b = temp;
}
