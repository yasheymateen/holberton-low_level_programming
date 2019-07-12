#include <stdio.h>
/**
 * main - function that prints numebrs from 00 to 99
 * Return: void
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if ((i == 57) && (j == 57))
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
