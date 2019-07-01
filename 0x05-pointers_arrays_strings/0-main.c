#include "holberton.h"
#include <stdio.h>

/**
 * main - check code for Holberton students project files
 *
 * Return - Always 0
 */
int main(void)
{
  int n;

  n = 402;
  printf("n=%d\n", n);
  reset_to_98(&n);
  printf("n=%d\n", n);
  return (0);
}
