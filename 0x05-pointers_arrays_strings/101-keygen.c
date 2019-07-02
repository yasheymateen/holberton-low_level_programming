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
	int sum, i, j;

	char a[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char pass[100];

	srand(time(NULL));
	sum = 0;
	i = 0;

	while (sum < (2772 - 122))
	{
		j = rand() % 62;
		pass[i] = a[j];
		sum += pass[i];
		i++;
	}
	j = 2772 - sum;
	pass[i] = j;
	printf("%s\n",  pass);
	return (0);
}
