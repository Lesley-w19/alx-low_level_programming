#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef of struct dog.
 */
typedef struct dog dog_t;

/**
 * struct dog - structure that stores information on a dog.
 * @name: name of the dog, type char *.
 * @age: age of the dog, type float.
 * @owner: name of the owner, type char *.
 *
 * Description: A struct called dog that stores the name of the dog,
 * age of the dog and the name of the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
