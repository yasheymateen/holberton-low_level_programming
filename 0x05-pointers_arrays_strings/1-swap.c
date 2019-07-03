#include "holberton.h"

/**
 * swap - swaps the values of two integers
 *
 *Description: swaps values of two integers
 *@a: address of a value
 *@b: address of b value
 * Return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;

*a = *b;
*b = temp;
}
