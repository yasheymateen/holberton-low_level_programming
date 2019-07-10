#include "holberton.h"
int is_prime_checker(int n, int i);
/**
 * is_prime_number - function that returns 1 if input integer is a prime number
 * @n: input integer
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (is_prime_checker(n, 2));
}

/**
 * is_prime_checker - checks to see if n in s prime
 * @n: input integer
 * @i: variable to test
 * Return: 1 if prime, 0 if not
 */

int is_prime_checker(int n, int i)
{
if (n == i)
return (1);
if (n % i)
return (is_prime_checker(n, i + 1));
return (0);
}
