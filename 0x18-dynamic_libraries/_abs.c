#include "main.h"

/**
 * _abs - computes the absolute value of an int
 * @n: int to be computed of type number
 * Return: absolute value of int n
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
