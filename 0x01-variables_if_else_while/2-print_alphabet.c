#include <stdio.h>
/**
 * main - function that prints the alphabet in lowercase
 * Return: void
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
