#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: is the filename.
 * @letters: is the letters number.
 *
 * Return: it returns the letter's number.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fle, m;
	long int n;
	char *buf;

	buf = malloc(sizeof(char) * (letters + 1));

	if (!buf)
		return (0);

	if (filename == NULL)
		return (0);

	fle = open(filename, O_RDONLY);

	if (fle == -1)
		return (0);

	n = read(fle, buf, letters);
	close(fle);

	if (n == -1)
		return (0);
	buf[letters] = '\0';

	m = write(STDOUT_FILENO, buf, n);
	free(buf);

	if (m == -1)
		return (0);

	return (n);
}
