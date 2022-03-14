#include <unistd.h>
/**
 * main - print out the given line
 *
 * Descriptive: do not use names functions
 *
 * Return:1 (Success)
 */
int main(void)
{
	char wrds[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, wrds, 59);
	return (1);
}
