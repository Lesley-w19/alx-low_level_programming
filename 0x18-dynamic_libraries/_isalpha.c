#include "main.h"

/**
 * _isalpha - returns 1 if char c is an alphabetical char
 * @c: character
 * Return: 1 if alphabetical char, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
