#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - calculates result of commands passed in terminal
 * @argc: argument count, # of arguments
 * @argv: array of argument values
 * Return: result if success, error and exit if fails
 */
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (!get_op_func(argv[2]) || *(argv[2] + 1))
	{
		printf("Error\n");
		return (99);
	}

	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
