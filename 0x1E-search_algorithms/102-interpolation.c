#include "search_algos.h"

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
int start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (array[end] != array[start])
	{
		mid = start + (
			(value - array[start]) * (end - start) / (array[end] - array[start])
		);

		if (mid > (int) size)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);

}
