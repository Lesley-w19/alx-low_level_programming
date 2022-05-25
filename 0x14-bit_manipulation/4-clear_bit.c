#include "main.h"

/**
 * clear_bit - function that sets the vlue of a bit to 0 at any given index.
 * @: pointer to the unsigned long int.
 * @index: is the index, starting from 0 of the bi you want to get.
 *
 * Return: 1 if it worked, or -1 if an error ocured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
