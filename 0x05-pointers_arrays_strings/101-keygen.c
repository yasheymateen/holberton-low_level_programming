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
	int i, r, sum;
	char array[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[100];

	srand(time(NULL));
	sum = 0;
	i = 0;
	while (sum < (2772 - 122))
	{
		r = rand() % 62;
		password[i] = array[r];
		sum = sum + password[i];
		i++;
	}
	r = 2772 - sum;
	password[i] = r;
	i++;
	password[i] = '\0';
	printf("%s", password);
	return (0);
}
