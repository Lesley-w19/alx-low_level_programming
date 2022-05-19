#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the opcodes of its own main function.
 *
 * @argc: the argument count.
 * @argv: the argument vector.
 *
 * Return: always returns 0.
 */

int main(int argc, char *argv[])
{
	char *op_codes = (char *) main;
	int n, nbytes;

	if (argc != 2)
	{
		printf("Eroor\n");
		exit(1);
	}


	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < nbyts; n++)
	{
		printf("%02x", op_codes[n] & 0xFF);

		if (n != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
