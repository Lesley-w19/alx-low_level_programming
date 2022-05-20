#include "main.h"

/**
 * binary_to_unit - function that converts a binary number to an unsigned int.
 * @b: binary. Is pointing to a string of 0 and 1 chars.
 *
 * Return: unsigned int.
 * the converted number , or 0 if
 * there is one or more chars in the string b that is not 0 or 1.
 * b is NULL.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int n, base_two;

	if (!b)
		return (0);

	i = 0;

	for (n = 0; b[n] != '\0'; n++)
		;

	for (n--, base_two = 1; n >= 0; n--, base_two *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}

		if (b[n] & 1)
		{
			i += base_two;
		}
	}

	return (i);
}
