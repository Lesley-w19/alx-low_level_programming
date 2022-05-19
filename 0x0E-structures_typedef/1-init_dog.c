#include "dog.h"

/**
 * init_dog - a function that initializes the variable of type struct dog.
 * @d: the struct itself.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * (*d). || d->, to access the elements in the structure.
 *Return: no return.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
