#include <stdio.h>
/**
 * main - function prints lowercase alphabet in reverse
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 122; i >= 95; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
