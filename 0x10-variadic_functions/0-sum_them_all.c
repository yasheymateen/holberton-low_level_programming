#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - add all parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, result;

	result = 0;
	if (n == 0)
		return (0);
	va_start(sum, n);
	for (i = 0; i < n; i++)
		result += va_arg(sum, unsigned int);
	va_end(sum);
	return (total);
}
