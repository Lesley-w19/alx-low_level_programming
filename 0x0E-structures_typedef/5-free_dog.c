#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: struct dog itself.
 *
 * Return: no return.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	else
	{
		free(((*d).name));
		free(((*d).owner));
		free(d->age);
		free((*d));
	}

}

