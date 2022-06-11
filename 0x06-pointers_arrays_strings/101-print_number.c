#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the integer.
 *
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
