#include "holberton.h"
/**
 * print_last_digit - function that prints last digit of a number
 * @n: digit to print
 * Return: last digit
 */

int print_last_digit(int n)
{
if (n < 0)
n *= -1;
_putchar((n % 10) + '0');
return (n % 10);
}
