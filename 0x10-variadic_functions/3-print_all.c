#include "variadic_functions.h"
/**
 * print_all- a function that prints anything.
 * @format: is a list of typs of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list varlist;
	unsigned int l = 0, m, n = 0;
	char *str;
	const char t_arg[] = "cifs";
	va_start(varlist, format);
	while (format && format[l])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[l] == t_arg[m] && n)
			{
				printf(", ");
				break;
			}
			m++;
		}
		switch (format[l])
		{
			case 'c':
				printf("%c", va_arg(varlist, int)), n = 1;
				break;
			case 'i':
				printf("%d", va_arg(varlist, int)), n = 1;
				break;
			case 'f':
				printf("%f", va_arg(varlist, double)), n = 1;
				break;
			case 's':
				str = va_arg(varlist, char *), n = 1;
				if (!str)
				{
					printf("nil");
					break;
				}
				printf("%s", str);
				break;
		}
		l++;
	}
	printf("\n"), va_end(varlist);
}
