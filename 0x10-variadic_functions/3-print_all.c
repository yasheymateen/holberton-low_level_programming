#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list input;
	unsigned int i;
	char *temp, *ind;

	i = 0;
	va_start(input, format);
	while (format && format[i])
	{
		ind = "";
		if (format[i + 1])
			ind = ", ";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", (char)va_arg(input, int), ind);
			break;
		case 'i':
			printf("%d%s", va_arg(input, int), ind);
			break;
		case 'f':
			printf("%f%s", (float)va_arg(input, double), ind);
			break;
		case 's':
			temp = va_arg(input, char *);
			if (!temp)
				temp = "(nil)";
			printf("%s%s", temp, ind);
			break;
		}
		i++;
	}
	va_end(input);
	printf("\n");
}
