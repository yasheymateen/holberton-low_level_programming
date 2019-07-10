#include "holberton.h"
/**
 * print_chessboard - function that prints a chessboard.
 * @a: board
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int x, j;

x = 0;
j = 0;
while (x < 8)
{
j = 0;
while (j < 8)
{
_putchar(a[x][j]);
j++;
}
_putchar('\n');
x++;
}
}
