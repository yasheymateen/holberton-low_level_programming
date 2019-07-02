#include <stdio.h>
#include <stdliib.h>
#include <time.h>
/**
 * main - program that generates random valid passpords for 101-crackme program
 *
 * Return: password
 */

int main(void)
{
	int sum = 2772;
	char c;

	srand(time(NULL));

	while (sum > GRAPH_MAX)
	{
		c = rand() % (GRAPH_MAX - GRAPH_MIN) + GRAPH_MIN;

		sum -= c;

		if (sum < GRAPH_MIN)
		{
			c -= (GRAPH_MIN - sum);
			sum = GRAPH_MIN;
		}
		putchar(c);
	}
	putchar(sum);

	return (0);
}
