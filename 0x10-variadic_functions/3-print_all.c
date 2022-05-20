#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * chk_int - function that prints out interger.
 * @par_int: the data of type.
 *
 * Return: no return.
 */

void chk_int(va_list par_int)
{
	printf("%d", va_arg(par_int, int));
}

/**
 * chk_char - function that prints out the character char.
 * @par_char: represents the data type.
 *
 * Return: no return.
 */

void chk_char(va_list par_char)
{
	printf("%c", va_arg(par_char, int));
}

/**
 * chk_float - function that prints out float.
 * @par_float: represents the data type.
 *
 * Return: no return.
 */
void chk_float(va_list par_float)
{
	printf("%f", va_arg(par_float, double));
}

/**
 * chk_str - function that prints the string.
 * @par_str: represents the data tpye.
 *
 * Return: no return.
 * if the string is NULL, print (nil).
 */
void chk_str(va_list par_str)
{
	char *str;

	str = va_arg(par_str, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}


/**
 * print_all - function that prints anything.
 * @format: is a list of the types of arguments passed to the function.
 *
 * Return: no return.
 * print a new line at the end of the function.
 */

void print_all(const char * const format, ...)
{
	chk_types types[] = {
		{"c", chk_char},
		{"i", chk_int},
		{"f", chk_float},
		{"s", chk_str},
		{NULL, NULL}
	};

	int a = 0, b = 0;
	va_list args;
	char *separator = "";

	va_start(args, format);

	while (format)
	{
		if (format[a])
		{
			while (types[b].chk)
			{
				if (format[a] == *types[b].chk)
				{
					printf("%s", separator);
					types[b].f(args);
					separator = ", ";
				}
				b++;
			}
		}
		b = 0;
		a++;
	}

	printf("\n");
	va_end(args);
}
