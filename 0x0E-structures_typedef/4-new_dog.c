#include "dog.h"
#include <stdio.h>

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
	dog_t *p;
	int d, dname, downer;

	p = malloc(sizeof(*p));

	if (p == NULL || !(name) || !(owner))
	{
		free(p);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;

	for (downer = 0; owner[downer]; downer++)
		;

	(*p).name = malloc(dname + 1);
	(*p).owner = malloc(downer + 1);

	if (!(p->name) || !(p->owner))
	{
		free(p->name);
		free(p->owner);
		free(p);
		return(NULL);
	}

	for (d = 0; d < dname; d++)
		p->name[d] = name[d];
	p->name[d] = '\0';

	p->age = age;

	for (d = 0; d < downer; d++)
		p->owner[d] = name[d];
	p->owner[i] = '\0';

	return (p);
}

