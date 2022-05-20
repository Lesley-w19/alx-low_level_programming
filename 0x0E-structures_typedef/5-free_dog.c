#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: struct dog itself.
 *
 * Return: no return.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(((*d).name));
		free(((*d).owner));
		free(d->age);
		free(d);
	}

}

