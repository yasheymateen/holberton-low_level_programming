#include "holberton.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: number to check for sign of
 * Return: 1 if > 0, 0 if 0, -1 if < 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('-');
return ('/');
}
}
