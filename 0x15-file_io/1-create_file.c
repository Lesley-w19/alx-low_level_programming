#include "main.h"

/**
 * _fstrlen - a function that returns the size of a string.
 * @s: the string.
 *
 * Return: returns the size of a string.
 */

int _fstrlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size ++;
	return (size);
}

/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a  NULL terminated string to write to the file.
 *
 * Return: returns 1 on success
 * On failure, returns 0
 */

int create_file(const char *filename, char *text_content)
{
	int fle_d, n;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fle_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fle_d == -1)
		return (-1);

	n = write(fle_d, text_content, _fstrlen(text_content));

	close(fle_d);

	if (n == -1)
		return (-1);

	return (1);
}


