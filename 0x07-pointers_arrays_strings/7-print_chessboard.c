#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int a, m = 0;

	for (a = 0; a < 64; a++)
	{
		if (a % 8 == 0 && a != 0)
		{
			m = a;
			_putchar('\n');
		}
		_putchar(a[a / 8][a - m]);
	}
	_putchar('\n');
}
