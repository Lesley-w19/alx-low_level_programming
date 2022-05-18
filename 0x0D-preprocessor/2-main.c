#include <stdio.h>

/*
 *main - prints out the name of the file it was compiled from
 *
 * Return - always returns 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
