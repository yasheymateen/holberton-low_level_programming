#include "holberton.h"
#include <stdio.h>
/**
 * main - program that prints its name and doesn't compile if renamed
 * @argc: # of arguments
 * @argv: array containing the argument values
 * Return: void
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
