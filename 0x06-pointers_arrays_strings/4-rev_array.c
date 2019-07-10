#include "holberton.h"
/**
 * reverse_array - function that reverses content of an array of integers
 * @a: array to reverse
 * @n: # of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
  int x, tmp;

  x = 0;
  tmp = 0;
  n-= 1;

  while (x <= n)
    {
      tmp = a[n];
      a[n--] = a[x];
      a[x++] = tmp;
    }
}
