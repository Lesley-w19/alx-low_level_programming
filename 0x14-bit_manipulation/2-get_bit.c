#include "main.h"

/**
 * get_bit - function that return the value of a bit at a given index.
 * @n: unsigned long int.
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index.
 * if an error ocurs, returns -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (n == 0 && index < 64)
		return (0);

	for (b = 0; b < 63; n >>= 1, b++)
	{
		if (index == b)
		{
			return (n & 1);
		}
	}
	
	return (-1);
}
