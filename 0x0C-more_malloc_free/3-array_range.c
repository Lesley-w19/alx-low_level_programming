#include <stdlib.h>
#include "main.h"

/**
 * array_range - an array that contains all the values from min to max.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: returns the pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array = NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
