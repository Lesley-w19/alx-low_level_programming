#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - a function that writes the character c to stdout.
 * @c: the character to print.
 *
 * Return: On success 1, and -1 if it fails.
 */

int _putchar(char c){
	return (write(1, &c, 1));
}
