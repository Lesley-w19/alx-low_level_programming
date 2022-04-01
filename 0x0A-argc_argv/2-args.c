#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc : is number of command line arguments
 * @argv : array which contains program command line arguments
 * Return : 0 is success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
