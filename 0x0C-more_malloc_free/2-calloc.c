#include <stdlib.h>
#include "main.h"

/**
 *_calloc - function allocates memory for an array.
 *@nmemb:  number of elements.
 *@size:  number of bytes.
 *
 *Return: returns a pointer to the allocated memory.
 *If nmemb or size is 0, _calloc returns NULL.
 *If malloc fails, _calloc returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		p[a] = 0;

	return (p);
}
