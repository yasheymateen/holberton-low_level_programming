#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: file name
 * @letters: number of letter it should read
 * Return: number of characters printed out
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	int ret_in, ret_out;
	char *buf;

	ret_in = ret_out = 0;
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	while ((ret_in = read(fd, buf, letters)) > 0 && (size_t)ret_out < letters)
	{
		i = write(STDOUT_FILENO, buf, (ssize_t)ret_in);
		if (i == -1 || i != ret_in)
		{
			close(fd);
			free(buf);
			return (0);
		}
		ret_out += i;
	}
	i = close(fd);
	if (ret_in == -1)
		return (0);
	if (i == -1)
		return (0);
	free(buf);
	return (ret_out);
}
