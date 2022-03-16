#include "main.h"

/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @i: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int u)
{
	if (u >= 0)
	{
		return (u);
	}
	else
	{
		return (u * -1);
	}
}
