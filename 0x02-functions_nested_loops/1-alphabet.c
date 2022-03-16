#include "main.h"
/**
 *main - prints the alphabet in lowercase
 *
 * Description: have a prototype(main.h)
 * only use _putchar twice in code
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	print_alphabet('\n');
	return (0);
}
