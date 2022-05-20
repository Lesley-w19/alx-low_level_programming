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
	va_list lst;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(lst, n);

	for (x = 0; x < n; x++)
		sum += va_arg(lst, int);

	va_end(lst);

	return (sum);
}



