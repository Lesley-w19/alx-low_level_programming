#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search -  a function that searches for a value
 * in a sorted array of integers using Interpolation search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
int low = 0, high = size - 1;
size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

	if (array == NULL)
		return (-1);

	while (array[high] != array[low])
	{

		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);

}