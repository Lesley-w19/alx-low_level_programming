#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on eact element of an array.
 * @array: input array.
 * @size: the size of the array.
 * @action: is a pointer to the function to use.
 *
 * Return: no return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;
	
	 if (array && action)
	 {
		 for (a = 0; a < size; a++)
			 action(array[a]);
	 }
}
