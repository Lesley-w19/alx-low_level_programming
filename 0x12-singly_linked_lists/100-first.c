#include "lists.h"
#include <stdio.h>

void _construct(void) __attribute__((constructor));

/**
 * _construct - function that gives the constructor function.
 */

void _construct(void)
{
	char l1[] = "You're beat! and yet, you must allow,";
	char l2[] = "I bore my house upon my back!";

	printf("%s\n%s\n", l1, l2);
}
