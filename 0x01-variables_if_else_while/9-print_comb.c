#include <stdio.h>
/**
 * main - function that prints all possible combinations of single digit nums
 * Return: void
 */

int main(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
