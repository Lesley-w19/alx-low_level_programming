#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
int step = sqrt(size);
size_t prev = 0;

if (array == NULL || array[0] > value)
return (-1);

while (array[prev] < value)
{
printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
prev += step;

if (prev >= size)
break;
}

prev -= step;
printf("Value found between indexes [%ld] and [%ld]\n", prev, prev + step);

while (array[prev] <= value)
{
printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

if (array[prev] == value)
return (prev);

prev++;
}

return (-1);
}
