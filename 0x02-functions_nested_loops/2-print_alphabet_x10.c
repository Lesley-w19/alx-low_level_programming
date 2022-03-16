#include "main.h"

/**
 * main - print lowercase alphabets 10x
 *
 * Description: use _putchar only twice in code
 *
 * Return:0 (success)
 */
void print_alphabet_x10(void)
{
	int m, n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
