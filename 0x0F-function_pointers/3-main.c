#include "3-calc.h"
#include <stdlib.h>

/**
 * main - the main function.
 *
 * @argc:  the argument count, from index 0.
 * @argv:  the argument vector.
 *
 * Return: always returns 0.
 * if number of arguments is wrong, print error, exit with status 98.
 * if no operator, print Error, exit with status 99.
 * if user b for / or % is 0, print Error, exitwith status 100.
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*optn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	optn = get_op_func(argv[2]);

	if (optn == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", optn(a, b));
	return(0);
}

