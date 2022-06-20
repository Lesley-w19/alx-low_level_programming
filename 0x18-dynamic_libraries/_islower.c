#include "main.h"

/**
 * _islower - returns 1 if character is lowercase, 0 otherwise
 * @c: alphabetic character to check
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
