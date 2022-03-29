#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int y, m = 0;

	for (y = 0; y < 64; y++)
	{
		if (y % 8 == 0 && y != 0)
		{
			m = i;
			_putchar('\n');
		}
		_putchar(a[y / 8][y - m]);
	}
	_putchar('\n');
}
