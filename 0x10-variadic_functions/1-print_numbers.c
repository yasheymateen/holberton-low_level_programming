#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers followed by new line
 * @separator: printed between numbers
 * @n: number of parameters
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int i;

	va_start(input, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(input, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(input);
	printf("\n");
}
