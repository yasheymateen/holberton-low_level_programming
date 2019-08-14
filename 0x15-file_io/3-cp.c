#include "holberton.h"

/**
 * main - function that copies info from one file to another
 * @argc: number of arguments
 * @ar: value of the arguments
 * Return: 0 for success
 */
int main(int argc, char **ar)
{
	int fp_from, fp_to, j;
	ssize_t write_from, write_to;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fp_from = open(ar[1], O_RDONLY);
	if (fp_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ar[1]), exit(98);
	fp_to = open(ar[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fp_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ar[2]), exit(99);
	write_from = 1;
	while (write_from)
	{
		write_from = read(fp_from, buffer, BUFFER_SIZE);
		if (write_from == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ar[1]), exit(98);
		if (write_from > 0)
		{
			write_to = write(fp_to, buffer, write_from);
			if (write_to == -1 || write_from != write_to)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ar[2]), exit(99);
		}
		}
			j = close(fp_from);
			if (j == -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from), exit(100);
			j = close(fp_to);
			if (j == -1)
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to), exit(100);
			return (0);
		}
