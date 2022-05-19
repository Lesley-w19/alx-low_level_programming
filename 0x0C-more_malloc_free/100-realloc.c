#include <stdlib.h>
#include "main.h"

/**
 * _realloc - copies content to a newly allocated space.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: size in bytes of the new memory block.
 *
 * Return: returns ptr.
 * If new_size > old_size, do not initialize 'added' memory.
 * If new_size == old_size, return ptr.
 * If ptr is NULL, malloc(new_size).
 * If new_size == 0 and ptr != NULL, free(ptr).Return(NULL)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
