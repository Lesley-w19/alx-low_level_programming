#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int x, y, ab;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			ab = x * y;
			_putchar(44);
			_putchar(32);
			if (ab <= 9)
			{
				_putchar(32);
				_putchar(ab + 48);
			}
			else
			{
				_putchar((ab / 10) + 48);
				_putchar((ab % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
