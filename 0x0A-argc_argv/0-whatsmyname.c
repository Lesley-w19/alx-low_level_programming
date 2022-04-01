#include <stdio.h>

/**
 * main - prints its name, followed by a new name
 * @argc: is the number of command line arguments
 *     is in form of integers
 * @argv: is the array that contains the command line arguments
 *    printed in form of characters/strings
 * Return 0 is success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
