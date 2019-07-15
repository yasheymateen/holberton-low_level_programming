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
	int i, j, res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		res += atoi(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", res);
	if (argc < 1)
	{
		printf("0\n");
	}
	return (0);
}
