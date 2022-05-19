#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: input array.
 * @size: the number of elements inthe array array.
 * @cmp: is a pointer to the function to be used to compare values.
 * Return: returns the index of the first element for which cmp function
 * does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int indx;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (indx = 0; indx < size; indx++)
			if (cmp(array[indx]))
				return (indx);
	}

	return (-1);
}
