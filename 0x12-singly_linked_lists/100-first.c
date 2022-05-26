#include "lists.h"

/**
 *_construct - function that gives the constructor function.
 * 
 * printf: can be used to print the characters.
 */

void _construct(void) _attribute_((constructor));

void _construct(void)
{
	char l1[] = "You're beat! and yet, you must allow,";
	char l2[] = "I bore my house upon my back!";

	printf("%s\n%s\n", l1, l2);
}
