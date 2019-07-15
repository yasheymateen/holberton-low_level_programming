#include "holberton.h"
#include <stdio.h>
/**
 * main - program that adds positive numbers
 * @argc: # of arguments
 * @argv: array of argument values
 * Return: void
 */

int main(int argc; char *argv[])
{
	int i, j, res, val;

	res = 0;

	while (i < argc)
	{
		j = 0;
		val = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				val = val*10 + argv[i][j] - '0';
			else
			{
				puts("Error\n");
				return (1);
			}
			j++;
		}
		sum += val;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
