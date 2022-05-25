#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: is the pointer to an unsigned long int.
 * @index: is the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n |= 1 << index;

	return (1);
}
