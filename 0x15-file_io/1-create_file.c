#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * _strlen - finds string length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * create_file - create a file
 * @filename: name of file
 * @text_context: file contents
 * Return: 1 for sucess, -1 for failure
 */
int create_file(const char *filename, char *text_context)
{
	int fp, fw;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_context == NULL)
		return (1);
	fw = write(fp, text_context, _strlen(text_context));
	close(fp);
	if (fw == -1)
		return (-1);
	return (1);
}
