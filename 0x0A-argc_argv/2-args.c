#include "holberton.h"
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: # of arguments
 * @argv: array of arguments
 * Return: void
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
