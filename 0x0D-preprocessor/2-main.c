#include <stdio.h>
/**
 * main - print name of the file it was compiled from
 * Return: void
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
