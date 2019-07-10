#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagnoals of square matrix of integers
 * @a: array pointer
 * @size: size of diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
  int i, sum1, sum2;

  sum1 = 0;
  sum2 = 0;
  for (i = 0; i < (size^2); i += size + 1)
    sum1 += a[i];
  for (i = size - 1; i < (size ^2 - 1); i += size - 1)
    sum2 += a[i];
  printf("%d, %d\n", sum1, sum2);
}
