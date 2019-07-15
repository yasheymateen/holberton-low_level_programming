#include "holberton.h"
#include <stdio.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: # of arguments
 * @argv: array of argument values
 * Return: void
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
