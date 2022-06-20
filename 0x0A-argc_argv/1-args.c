#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc : number of command line arguments
 *    count in terms of index
 * @argv : array that contains the program command line arguments
 *
 * Return: returns 0 is success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
