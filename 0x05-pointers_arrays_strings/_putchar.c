#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - a function that writes the character to stdout.
 * @c: the character
 *
 * Return: on success 1, on fail -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

