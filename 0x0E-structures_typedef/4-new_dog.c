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
	dog_t *p = malloc(sizeof(*p));
	int d, dname, downer;

	if (p == NULL || !(name) || !(owner))
	{
		free(p);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
                ;

        for (downer = 0; owner[downer]; downer++)
                ;

	p->name = malloc(sizeof(dname) + 1);
        p->owner = malloc(sizeof(downer) + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return(NULL);
	}

	for (d = 0; d < dname; d++)
		p->name[d] = name[d];

	p->age = age;

	for (d = 0; d < downer; d++)
		p->owner[d] = name[d];

	return (p);
}
