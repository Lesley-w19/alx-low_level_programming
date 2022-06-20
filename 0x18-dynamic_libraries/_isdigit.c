#include "main.h"

/**
 * _isdigit - checks for a digit 0-9
 * @c: char to be checked
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
