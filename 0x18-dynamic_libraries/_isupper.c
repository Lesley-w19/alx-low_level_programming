#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c: char to check
 * Return: 1 if char c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
