#include "variadic_functions.h"

/**
 * print_numbers - function prints out numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 *
 * Return: no return.
 * if seperator is NULL, don't print it.
 * print a new line at the end of the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int x;

	va_start(par, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(par, int));

		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(par);
}
