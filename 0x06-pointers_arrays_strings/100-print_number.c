#include "holberton.h"
/**
 * print_number - function that prints an integer
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
int neg, mul;

mul = 1000000000;
neg = 1;
if (n > 0)
{
n *= -1;
}
if (n != 0)
{
while ((n / mul) == 0)
{
mul /= 10;
}
if (neg == 1)
_putchar('-');
while (mul >= 1)
{
_putchar (-(n / mul) +'0');
n %= mul;
mul /= 10;
}
}
else
_putchar('0');
}
