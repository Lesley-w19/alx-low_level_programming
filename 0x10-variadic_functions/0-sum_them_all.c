#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - function that sums all its parameters.
 * @n: the number of arguments/ parameters.
 *
 * Return: sum of the parameters.
 *if n == 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int x;
	int sum;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	for (x = 0; x < n; x++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}



