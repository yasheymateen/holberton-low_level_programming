#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings followed by new line
 * @separator: string to be printed between strings
 * @n: number of parameters
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int i;
	char *str;

	va_start(input, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(input, char *);

		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		
	}
	va_end(input);
	putchar('\n');
}
