#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: buffer size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%08x: ", x);
			j = 0;
			while (j < 10)
			{
				if (j % 2 == 0 && j != 0)
					printf(" ");
				if ((j + x) > size - 1)
				{
					printf("  ");
				}
				else
					printf("%.2x", b[x + j]);
				j++;
			}
			printf(" ");
			j = 0;
			while (j < 10)
			{
				if ((j + x) > size - 1)
					break;
				if (b[j + x] <= 31 || b[j + 1] >= '~')
					b[j + x] = '.';
				putchar(b[j + x]);
				j++;
			}
			printf("\n");
		}
	}
}
