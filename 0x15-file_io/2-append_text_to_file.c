#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * append_text_to_file - append text to a file
 * @filename: the file to append
 * @text_content: text contents
 * Return: 1 for success, -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fp, fw;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	fw = write(fp, text_content, i);
	close(fp);
	if (fw == -1)
		return (-1);
	return (1);
}
