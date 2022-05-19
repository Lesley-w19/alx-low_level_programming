#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that prints a name.
 * @name: name that is input.
 * @f:  the function pointer.
 *
 * Return: no return.
 */


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

