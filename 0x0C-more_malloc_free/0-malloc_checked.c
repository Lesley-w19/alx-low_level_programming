#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to allocate memory.
 * @b: amount of bytes.
 *
 *Return: returns a pointer to the allocated memory.
 *If malloc fails, process termination should be of status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
