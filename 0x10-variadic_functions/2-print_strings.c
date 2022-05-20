#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 * @separator: is the string to be printed btwn the strings.
 * @n: is the number of strings passed to the function.
 *
 * Return: no return.
 * if separator is NULL, don't print it.
 * if one of the string is NULL, print (nil).
 * print a new line at the end of the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int s;
	char *str;

	va_start(par, n);

	for (s = 0; s < n; s++)
	{
		str = va_arg(par, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && s < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(par);
}
