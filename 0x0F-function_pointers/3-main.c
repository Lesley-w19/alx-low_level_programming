#include "3-calc.h"

/**
 * main - the main function.
 *
 * @argc:  the argument count, from index 0.
 * @argv:  the argument vector.
 *
 * Return: always returns 0.
 */

int main(int argc, int *argv[])
{
	int a, b;
	int (*optn)(int, int);

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error");
		exit(99);
	}

	optn = get_op_func(argv[2]);

	if (optn == NULL)
	{
		printf("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", optn(a, b));
	return(0);
}

