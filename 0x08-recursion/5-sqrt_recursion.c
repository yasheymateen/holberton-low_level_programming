#include "holberton.h"
int _sqrt_checker(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of number
 * @n: number for which to find the natural square root
 * Return: resulting number
 */

int _sqrt_recursion(int n)
{
  return (_sqrt_checker(n, 1));
}

int _sqrt_checker(int n, int i)
{
  if (n < i * i)
    return (-1);
  else if (n == i * i)
    return (i);
  return (_sqrt_checker(n, i + 1));
}
