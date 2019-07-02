#include "holberton.h"

/**
 * print_line - draws a straight line in terminal
 * @n: size of line
 *
 * Return: void
 */
void print_line(int n)
{
	while (--n >= 0)
		_putchar('_');
	_putchar('\n');
}
