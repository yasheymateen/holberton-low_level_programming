#include <stdio.h>
/**
 * main - function that prints alphabet in lowercase and then in uppercase
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
