#include <stdlib.h>
#include "main.h"

/**
 * array_range - an array that contains all the values.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: returns the pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */

int *array_range(int min, int max)
{
	int *arry;
	int a;

	if (min > max)
		return (NULL);

	arry = malloc(sizeof(*arry) * ((max - min) + 1));

	if (arry == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		arry[a] = min;

	return (arry);
}
