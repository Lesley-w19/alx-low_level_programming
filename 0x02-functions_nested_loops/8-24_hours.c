#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int m, n, o, p;

	for (m = 48; m <= 50; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (o = 48; o <= 53; o++)
			{
				for (p = 48; p <= 57; p++)
				{
					if (m >= 50 && n >= 52)
						break;
					_putchar(m);
					_putchar(n);
					_putchar(58);
					_putchar(o);
					_putchar(p);
					_putchar('\n');
				}
			}
		}
	}
}
