#include "main.h"

/**
 * main - checks the code
 *
 * Return: 0 always
 */
int main(void)
{
	int a;

	a = _islower('K');
	_putchar(a + '0');
	_putchar('\n');
	a = _islower('p');
	_putchar(a + '0');
	_putchar('\n');
	a = _islower(122);
	_putchar(a + '0');
	_putchar('\n');
	return (0);
}
