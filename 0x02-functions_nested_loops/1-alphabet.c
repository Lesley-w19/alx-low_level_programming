#include "main.h"
/**
 * main - print alphabets in small letters
 *
 * Description:have _putchar used only twice
 *
 * Return:0 (success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
