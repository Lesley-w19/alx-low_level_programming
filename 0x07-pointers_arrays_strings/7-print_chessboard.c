#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */

void print_chessboard(char (*a)[8])
{
 	unsigned int col, row;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}

		_putchar('\n');
	}
}
