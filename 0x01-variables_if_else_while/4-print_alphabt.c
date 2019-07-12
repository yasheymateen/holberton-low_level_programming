#include <stdio.h>
/**
 * main - function that prints alphabet in lowercase except q and e
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i == 101) || (i == 113))
			;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
