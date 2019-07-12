#include <stdio.h>
/**
 * main - function that prints all possible diff combos of two digits
 * Return: void
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
