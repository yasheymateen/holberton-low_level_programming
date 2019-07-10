#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: integer to get factorial
 * Return: -1 if error 
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1)
	return (n * factorial(n - 1));
}
