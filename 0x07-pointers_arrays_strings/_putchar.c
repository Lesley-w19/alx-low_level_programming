#include <unistd.h>

/**
 * _putchar - a function that returns string
 * @c: the character.
 *
 * Return: returns a character.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
