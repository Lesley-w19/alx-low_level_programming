#include "search_algos.h"
/**
 * print_array - print all value of an array in line
 *
 * @array: a pointer to the first element of the array to search in
 * @start: first element index of the array
 * @end: last element index of the array
 */
void print_array(int *array, int start, int end)
{
int i;

printf("Searching in array:");

for (i = start; i <= end; i++)
{
printf("%d", array[i]);

if (i < end)
printf(", ");
}
printf("\n");
}

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * 
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * 
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
size_t indx;
int start = 0, end = size - 1;

if (array == NULL)
return (-1);

while (start <= end)
{
print_array(array, start, end);
indx = start + (end - start) / 2;

if (array[indx] == value)
return (indx);

if (array[indx] > value)
end = indx - 1;
else
start = indx + 1;
}

return (-1);
}