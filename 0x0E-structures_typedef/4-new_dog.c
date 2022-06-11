#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates anew dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * store a copy of name and owner
 * Return: struct dog 
 * return NULL, if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int sizeName = _strlen_recursion(name), sizeOwner = _strlen_recursion(owner);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * sizeName + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * sizeOwner + 1);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}
